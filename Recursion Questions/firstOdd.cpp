#include<iostream>
using namespace std;

void odd(int n){
    if(n==1){
        cout<<"1 ";
        return;
    }
    odd(n-2);
    cout<<n<<" ";
}

int main(){
    int n,m;
    cin>>n;
    if(n%2==0) n=n-1;
    odd(n);
    return 0;
}