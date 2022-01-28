// 	Write a program to return the maximum occurring character in the input string,
//  e.g., if the input string is "java" then the function should return 'a'.

#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]-'a']++;
    }
    int max=0;
    char ans;
    for(int i=0;i<26;i++){
        cout<<count[i]<<" ";
       if(count[i]>max){
           max=count[i];
           ans=i;
       }
    }
    cout<<endl;
    ans=ans+'a';
    cout<<ans<<endl;
    return 0;
}