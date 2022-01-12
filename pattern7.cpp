#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n+1;i++){
        for(int j=1;j<=i;j++){
            cout<<n-j+1;
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<n-j+1;
        }
        cout<<endl;
    }

    return 0;
}

// 5
// 54
// 543
// 5432
// 54321
// 543210
// 54321
// 5432
// 543
// 54
// 5
