#include<iostream>
using namespace std;

void selectionSort(int a[],int n,int k){
    for(int i=0;i<k;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        if(min!=i){
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    if(k>n) k=n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n,k);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}