#include<iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int rankOfString(string s){
    int rank=1;
    int n=s.length();
    int mul=factorial(n);
    int count[256]={0};

    for(int i=0;i<n;i++){   // Frequency count
        count[s[i]]++;
    }

    for(int i=1;i<256;i++){  // Commulative frequency
        count[i]+=count[i-1];
    }

    for(int i=0;i<n;i++){
        mul=mul/(n-i);
        rank+=count[s[i]-1]*mul;
        for(int j=s[i];j<256;j++){
            count[j]--;
        }
    }
    return rank;
}

int main(){
    string s;
    cin>>s;
    cout<<"Rank of "<<s<<" is "<<rankOfString(s);
    return 0;
}