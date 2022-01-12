// Print the series: 1 + 1/2 + 1/4 + 1/8 + ...

#include<iostream>
#include<math.h>
using namespace std;

void series(int n){
    if(n==0){
        cout<<"1";
        return;
    }
    int t=pow(2,n);
    series(n-1);
    cout<<" + 1/"<<t;
}

int main(){
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    series(n-1);
    return 0;
}