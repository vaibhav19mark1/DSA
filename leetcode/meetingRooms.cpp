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
    bool attend=true;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++){
        if(v[i].first>=v[i-1].first && v[i].first<=v[i-1].second){
            attend=false;
            break;
        }
    }
    cout<<attend;
    return 0;
}