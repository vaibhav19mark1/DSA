#include<iostream>
using namespace std;

void printNatural(int n){
    if(n==1){
        cout<<"1 ";
        return;
    }
    cout<<n<<" ";
    printNatural(n-1);
}

int main(){
    int n;
    cin>>n;
    printNatural(n);
    return 0;
}