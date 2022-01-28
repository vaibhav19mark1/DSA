// Write a program to check if two String is an anagram of each other. 
// An anagram contains are of the same length and contains the same character, but in a different order, 
// for example, "Army" and "Mary" is the anagram. Your program should return true if both Strings are the anagram, false otherwise

#include<iostream>
using namespace std;

bool isAnagram(string s1,string s2){
    int count[26]={0};
    int n=s1.length();
    int m=s2.length();
    if(n!=m){
        return false;
    }

    for(int i=0;i<n;i++){
        count[s1[i]-'a']++;
    }
    for(int i=0;i<m;i++){
        count[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(isAnagram(s1,s2)){
        cout<<"Anagrams"<<endl;
    }
    else{
        cout<<"Not Anagrams";
    }
    return 0;
}