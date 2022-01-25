#include<iostream>
#include<vector>
using namespace std;

int knapsack(int val[],int wt[],int n,int bagsize){
    int profit[n+1][bagsize+1];

    for(int i=0;i<n+1;i++){
        for(int j=0;j<bagsize+1;j++){
            if(i==0 || j==0){
                profit[i][j]=0;
            }
            else if(wt[i-1]<=j){
                profit[i][j]=max(profit[i-1][j], val[i-1]+profit[i-1][j-wt[i-1]]);
            }
            else{
                profit[i][j]=profit[i-1][j];
            }
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<bagsize+1;j++){
            cout<<profit[i][j]<<" ";
        }
        cout<<endl;
    }
    return profit[n][bagsize];
}

int main(){
    int n,bagsize;
    cin>>n>>bagsize; 
    int val[n],wt[n];
    for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
    }
    cout<<knapsack(val,wt,n,bagsize);
    return 0;
}