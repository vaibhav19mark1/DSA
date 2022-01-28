// Write a program to count a number of words in a given String. 
// The words are separated by the following characters: space (‘ ’) or newline (‘\n’) or tab (‘\t’) 
// or a combination of these. For example, if input "Java is great" your program should print 3.

#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int c=1;
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' || s[i]=='\t' || s[i]=='\n'){
            c++;
        }
    }
    cout<<c;
    return 0;
}