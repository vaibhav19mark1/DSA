#include<iostream>
using namespace std;

void printNatural(int n){
    if(n==1){
        cout<<"1 ";
        return;
    }
    printNatural(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n;
    printNatural(n);
    return 0;
}