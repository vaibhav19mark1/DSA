// Print the series: 1^1 + 2^2 + 3^3 + 4^4 + 5^5 + ...

#include<iostream>
#include<math.h>
using namespace std;

void series(int n){
    if(n==1){
        cout<<"1";
        return;
    }
    int t=pow(n,n);
    series(n-1);
    cout<<" + "<<t;
}

int main(){
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    series(n);
    return 0;
}