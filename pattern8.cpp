#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    // Upper part
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        cout<<i;
        for(int j=1;j<=(i-1)*2-1;j++){
            cout<<" ";
        }
        if(i>1) cout<<i;
        cout<<endl;
    }

    // Lower part
    for(int i=1;i<=n-1;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        cout<<n-i;
        for(int j=1;j<(n-i-1)*2;j++){
            cout<<" ";
        }
        if(n-i>1) cout<<n-i;
        cout<<endl;
    }

    return 0;
}

//     1    
//    2 2
//   3   3
//  4     4
// 5       5
//  4     4
//   3   3
//    2 2
//     1
