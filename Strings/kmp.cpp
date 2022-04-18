#include<iostream>
#include<vector>
using namespace std;

void makeLPS(string t,vector<int> &lps,int m){
    int j=0,i=1;
    while(i<m){
        if(t[i]==t[j]){
            j++;
            lps[i]=j;
            i++;
        }
        else{
            if(j!=0){
                j=lps[j-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

int main(){
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int m=t.size();
    int n=s.size();
    vector<int> lps(m+1,0);
    makeLPS(t,lps,m);
}