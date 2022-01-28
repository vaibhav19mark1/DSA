// Write a program to test if two given String is a rotation of each other or not,
// e.g. if the given String is "XYZ" and "ZXY" then your function should return true,
// but if the input is "XYZ" and "YXZ" then return false.

#include<iostream>
using namespace std;

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    s1+=s1;
    if(s1.find(s2)==string::npos){
        cout<<"Not Rotation"<<endl;
    }
    else cout<<"Rotation";
    return 0;
}