#include<iostream>
using namespace std;

void insertionSort(int a[],int n,int k){
    for(int i=1;i<k;i++){
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
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
    insertionSort(a,n,k);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}