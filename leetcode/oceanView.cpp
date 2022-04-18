#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    int maxHt=a[n-1];
    vector<int> ans;
    ans.push_back(n-1);
    for(int i=n-2;i>=0;i--){
        if(a[i]>maxHt){
            ans.insert(ans.begin(),i);
            maxHt=a[i];
        }
    }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
