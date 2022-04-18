#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    vector<pair<int,int>> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int e,s;
        cin>>s>>e;
        v.push_back({s,e});
    }
    sort(v.begin(),v.end());
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(v[0].second);
    for(int i=1;i<n;i++){
        if(pq.top()<v[i].first){
            pq.pop();
            pq.push(v[i].second);
        }
        else{
            pq.push(v[i].second);
        }
    }
    cout<<pq.size();
    return 0;
}

// [[0, 30],[5, 10],[15, 20]] ---> [[10,5],[20,15],[30,0]]