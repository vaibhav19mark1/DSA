#include<iostream>
using namespace std;

void even(int n){
    if(n==0){
        cout<<"0 ";
        return;
    }
    even(n-2);
    cout<<n<<" ";
}

int main(){
    int n,m;
    cin>>n;
    if(n%2!=0) n=n-1;
    even(n);
    return 0;
}