#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=x || j>=n-x+1){
                cout<<j;
            }
            else cout<<" ";
        }
        if(i<=n/2) x++;
        else x--;
        cout<<endl;
    }
}

    // 1     7
    // 12   67
    // 123 567
    // 1234567
    // 123 567
    // 12   67
    // 1     7
