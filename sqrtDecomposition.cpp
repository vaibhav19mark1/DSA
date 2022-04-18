#include<iostream>
#include<cmath>
using namespace std;

void sqrtDecompose(int *a,int n,int blocks[],int b_size){
    for(int i=0;i<n;i++){
        blocks[i/b_size]+=a[i];
    }
}

void update(int a[],int n,int blocks[],int size,int i,int key){
    int change=key-a[i];
    a[i]=key;
    blocks[i/size]+=change;
}

int rangeSum(int a[],int n,int blocks[],int size,int l,int r){
    int start=l/size,end=r/size;
    int sum=0;
    for(int i=start+1;i<end;i++){
        sum+=blocks[i];
    }
    int i=l;
    while(i/size==start){
        sum+=a[i++];
    }
    i=r;
    while(i/size==end){
        sum+=a[i--];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int size=ceil(sqrt(n));
    int blocks[size]={0};
    sqrtDecompose(a,n,blocks,size);
    int q;
    cin>>q;
    while(q--){
        int type,i,key,l,r;
        cin>>type;
        switch(type){
            case 1: cin>>i>>key;
                    update(a,n,blocks,size,i,key);
                    break;
            case 2: cin>>l>>r;
                    cout<<rangeSum(a,n,blocks,size,l,r);
                    break;
        }
    }
    return 0;
}