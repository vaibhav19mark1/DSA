#include<iostream>
#include<cmath>
using namespace std;

void buildTree(int seg[],int a[],int l,int r,int i){
    if(l==r){
        seg[i]=a[l];
        return;
    }
    int mid=l+(r-l)/2;
    buildTree(seg,a,l,mid,2*i+1);
    buildTree(seg,a,mid+1,r,2*i+2);
    seg[i]=seg[2*i+1]+seg[2*i+2];
}

int rangeSum(int seg[],int a[],int sl,int sr,int i,int ql,int qr){
    if(sl>qr || sr<ql) return 0;
    if(sl>=ql && sr<=qr) return seg[i];
    int mid=sl+(sr-sl)/2;
    return rangeSum(seg,a,sl,mid,2*i+1,ql,qr)+
        rangeSum(seg,a,mid+1,sr,2*i+2,ql,qr);
}

void update(int seg[],int diff,int key,int l,int r,int i,int index){
    if(l==r){
        seg[i]=key;
        return;
    }
    seg[i]+=diff;
    int mid=l+(r-l)/2;
    if(index<=mid) update(seg,diff,key,l,mid,2*i+1,index);
    else update(seg,diff,key,mid+1,r,2*i+2,index);
}

void rangeUpdate(int* segment, int l,int r, int i, int p, int q, int* lazy, int key){
    if(lazy[i]!=0){
        segment[i]+=lazy[i]*(q-p+1);

        if(p!=q){
            lazy[2*i+1]+=lazy[i];
            lazy[2*i+2]+=lazy[i]; 
        }
        lazy[i]=0;
    }
    

    if(l>q || r<p || l>r) return;
    else if(l<=p && q<=r){
        segment[i]=key*(q-p+1);
    }
    else{
        int mid=p+(q-p)/2;
        rangeUpdate(segment,l,r,2*i+1,p,mid,lazy,key);
        rangeUpdate(segment,l,r,2*i+2,mid+1,q,lazy,key);
        segment[i]=segment[2*i+1]+segment[2*i+2];
    }

}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int size=2*pow(2,ceil(log2(n)))-1;
    int seg[size]={0};
    buildTree(seg,a,0,n-1,0);
    int q;
    cin>>q;
    while(q--){
        int type,i,key,l,r;
        cin>>type;
        switch(type){
            case 1: {cin>>i>>key;
                    int diff=key-a[i];
                    a[i]=key;
                    update(seg,diff,key,0,n-1,0,i);
                    break;}
            case 2: {cin>>l>>r;
                    cout<<rangeSum(seg,a,0,n-1,0,l,r)<<endl;
                    break;}
            case 3 : {
        cin>>l>>r>>key;
        int lazy[size]={0};
        rangeUpdate(seg,l,r,0,0,n-1,lazy,key);
        break;
        }     
        }
    }
    return 0;
}