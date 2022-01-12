#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch='A'+n-1;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        cout<<ch;
        for(int j=1;j<=(n-i)*2-1;j++){
            cout<<" ";
        }
        if(ch!='A') cout<<ch<<endl;
        ch--;
    }
}

// E       E 
//  D     D
//   C   C
//    B B
//     A