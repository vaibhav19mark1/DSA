// Print the series: 1 + 3 + 9 + 27 + 81 + ...

#include<iostream>
#include<math.h>
using namespace std;

void series(int n){
    if(n==0){
        cout<<"1";
        return;
    }
    int t=pow(3,n);
    series(n-1);
    cout<<" + "<<t;
}

int main(){
    int n;
    cout<<"Enter no. of terms: ";
    cin>>n;
    series(n-1);
    return 0;
}