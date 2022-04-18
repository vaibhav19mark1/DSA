#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

int m,n;

void dfs(vector<vector<int>> &v,int i,int j,string &path,char dir){
    if(i>=m || i<0 || j>=n || j<0 || !v[i][j]) return;
    v[i][j]=0;
    path.push_back(dir);
    dfs(v,i,j-1,path,'l');
    dfs(v,i,j+1,path,'r');
    dfs(v,i-1,j,path,'u');
    dfs(v,i+1,j,path,'d');
    path.push_back('x');
}

int main(){
    cin>>m>>n;
    vector<vector<int>> grid(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    unordered_set<string> s;
    string path;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            path="";
            dfs(grid,i,j,path,'o');
            if(path.size()) s.insert(path);
        }
    }
    
    cout<<s.size();
    return 0;
}