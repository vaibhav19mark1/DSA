#include<iostream>
using namespace std;

void toh(int n,char src,char dest,char aux){
    if(n==0){
        return;
    }
    toh(n-1,src,aux,dest);
    cout<<src<<" -> "<<dest<<endl;
    toh(n-1,aux,dest,src);
}

int main(){
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}