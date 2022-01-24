#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    return a.first>b.first;
}

int main(){
    int n,profit,deadline;
    cin>>n;
    vector<pair<int,int>> jobs;
    for(int i=0;i<n;i++){
        cin>>deadline>>profit;
        jobs.push_back(make_pair(profit,deadline));
    }
    sort(jobs.begin(),jobs.end(),compare);
    int m=-1;
    for(int i=0;i<n;i++){
        if(jobs[i].second>m){
            m=jobs[i].second;
        }
    }
    int sequence[m];
    for(int i=0;i<m;i++){
        sequence[i]=-1;
    }
    int maxProfit=0;
    for(int i=0;i<n;i++){
        int j=jobs[i].second-1;
        while(j>=0 && sequence[j]!=-1){
            j--;
        }
        if(j>=0 && sequence[j]==-1){
            sequence[j]=i;
            maxProfit+=jobs[i].first;
        }
    }
    cout<<"Max Profit: "<<maxProfit;
    return 0;
}