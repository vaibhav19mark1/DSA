// Write a program to print all permutations of a given String in Java/C/Python or any programming language of your choice. 
// For example, if given input is "123" then your program should print all 6 permutations e.g. "123", "132", "213", "231", "312" and "321".

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout<<"All permutations are:"<<endl;
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
    return 0;
}