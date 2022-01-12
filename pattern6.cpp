#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=2*i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}

//     1
//    321
//   54321
//  7654321
// 987654321
