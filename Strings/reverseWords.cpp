// Write a program to reverse the words in a given String sentence. 
// For example: if the input is "Java is best," then your program should print "best is Java".
// There is no restriction on preserving white space.

#include<iostream>
#include<vector>
using namespace std;

string reverseWords(string s){
    string ans="";
    vector<string> v;
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            v.push_back(temp);
            temp="";
        }
        else{
            temp+=s[i];
        }
    }
    v.push_back(temp);
    
    for(int i=v.size()-1;i>=0;i--){
        ans+=v[i]+' ';
    }
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
    return 0;
}