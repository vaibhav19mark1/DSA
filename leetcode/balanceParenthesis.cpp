#include<iostream>
#include<stack>
#include<queue>
#include<unordered_set>
using namespace std;

bool isBalanced(string s){
    stack<int> st;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')') st.pop();
    }
    return st.empty();
}

int main(){
    string s;
    vector<string> parenthesis;
    unordered_set<string> ans;
    getline(cin,s);
    queue<string> q;
    bool stop=false;
    q.push(s);

    while(!q.empty()){
        string current=q.front();
        q.pop();
        if(isBalanced(current)){
            ans.insert(current);
            stop=true;
        }
        if(!stop){
            for(int i=0;i<current.size();i++){
                string newstr=current.substr(0,i)+current.substr(i+1);
                if(isBalanced(newstr)){
                    ans.insert(newstr);
                    q.push(newstr);
                }
            }
        }
    }
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}