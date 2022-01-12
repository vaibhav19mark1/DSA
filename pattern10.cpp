#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i,h;
    int mid=n/2+1;
    h=mid;

    //Upper part
    for(i=1;i<=mid;i++){
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        cout<<i;
        for(int j=1;j<=(h-1)*2-1;j++){
            cout<<" ";
        }
        h--;
        if(i!=mid) cout<<i<<endl;
    }
    cout<<endl;
    h=mid;
    int h2=mid;

    //Lower part
    for(int it=1;it<=mid-1;it++){
        for(int m=1;m<=h2-2;m++){
            cout<<" ";
        }
        h2--;
        cout<<i;
        for(int m=1;m<=it*2-1;m++){
            cout<<" ";
        }
        cout<<i;
        h++;
        i++;
        cout<<endl;
    }

    return 0;
}

// 1   1
//  2 2
//   3
//  4 4
// 5   5