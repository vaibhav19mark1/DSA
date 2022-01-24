#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,c=1,s,e;
    cin>>n;
    vector<pair<int,int>> activity;
    for(int i=0;i<n;i++){
        cin>>s>>e;
        activity.push_back(make_pair(e,s));
    }
    sort(activity.begin(),activity.end());
    int end=-1;
    for(int i=1;i<n;i++){
        if(activity[i].second>=end){
            c++;
            end=activity[i].first;
        }
    }
    cout<<c;
    return 0;
}