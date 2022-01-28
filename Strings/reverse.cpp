// Write a program to reverse a String in C/Java/Python or choice of your programming language. 
// You can write either the recursive or iterative solution. 
// For example, if a given input is "abcd," then your function should return "dcba".

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}