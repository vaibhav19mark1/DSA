#include<iostream>
#include<climits>
using namespace std;

int leftMostRepeat(string s){
    int temp=INT_MAX;
    int count[256]={0};

    for(int i=0;i<256;i++){
        count[i]=-1;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]]==-1){
            count[s[i]]=i;
        }
        else temp=min(temp,count[s[i]]);
    }
    return (temp==INT_MAX)? -1:temp;
}

int main(){
    string s;
    cin>>s;
    int count[256]={0};
    // cout<<"Index of leftmost repeating character: "<<leftMostRepeat(s);
    // Approach 1: 2 passes
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]]>1){
            cout<<s[i];
            return 0;
        }
    }
    cout<<"No repeating character";

    // Approach 2: 1 Pass

    return 0;
}
