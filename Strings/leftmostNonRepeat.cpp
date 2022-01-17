#include<iostream>
#include<cstring>
using namespace std;

int LMNR(string s){
    int count[256]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(count[s[i]]==1){
            return i;
        }
    }
    return -1;
}

int leftmostNonRepeating(string s){
    int count[256];
    memset(count,-1,sizeof(count));
    for(int i=0;i<s.length();i++){
        if(count[s[i]]==-1){
            count[s[i]]=i;
        }
        else count[s[i]]=-2;
    }
    int temp=INT_MAX;
    for(int i=0;i<256;i++){
        if(count[i]>=0){
            temp=min(temp,count[i]);
        }
    }
    return (temp==INT_MAX) ? -1:temp;
}

int main(){
    string s;
    cin>>s;
    // cout<<"Index of leftmost non repeating: "<<leftmostNonRepeating(s);
    cout<<"Index of leftmost non repeating: "<<LMNR(s);
    return 0;
}