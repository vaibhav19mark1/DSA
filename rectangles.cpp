#include<iostream>
using namespace std;
 
int rectCount(int n, int m)
{
    return (m * n * (n + 1) * (m + 1)) / 4;
}
 
/* driver code */
int main()
{
    int n,m;
    cin>>n>>m;
    cout << rectCount(n, m);
    return 0;
}