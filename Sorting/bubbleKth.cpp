#include<iostream>
using namespace std;

void bubbleSort(int a[],int n,int k){
    for(int i=0;i<k;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
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
    bubbleSort(a,n,k);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}