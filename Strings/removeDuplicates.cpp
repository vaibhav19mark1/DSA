// Write a program to remove all the duplicate characters from a given input String, like,
// if the given String is "Java" then the output should be "Java". 
// The second or further occurrence of duplicates should be removed.

#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int count[26]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]+'a']++;
        if(count[s[i]+'a']>1){
            s.erase(s.begin()+i);
        }
    }
    cout<<s;
    return 0;
}