#include<iostream>
using namespace std;

int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1,j=low;

    while(j<high){
        if(a[j]<=pivot){
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[high]);
    return i+1;
}

void quickSort(int a[],int low,int high){
    if(low<high){
        int pIdx=partition(a,low,high);
        quickSort(a,low,pIdx-1);
        quickSort(a,pIdx+1,high);
    }
}

int main(){
    int n,k;
    cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}