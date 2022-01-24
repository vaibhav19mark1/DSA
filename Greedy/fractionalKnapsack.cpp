#include<iostream>
#include<algorithm>
using namespace std;

struct knapsack{
    int unit,price,no;
    float ratio;
};

bool compare(knapsack a,knapsack b){
    return a.ratio>b.ratio;
}

int main(){
    int n;
    cin>>n;
    knapsack item[n];
    int maxProfit=0;

    for(int i=0;i<n;i++){
        cin>>item[i].unit>>item[i].price;
        item[i].no=i;
        item[i].ratio=item[i].price/item[i].unit;
    }
    int bagsize;
    cin>>bagsize;
    sort(item,item+n,compare);
    int i=0;
    while(bagsize>0){
        if(item[i].unit<bagsize){
            maxProfit+=item[i].price;
            bagsize-=item[i].unit;
        }
        else{
            maxProfit+=item[i].ratio*bagsize;
            bagsize=0;
        }
        i++;
    }
    cout<<maxProfit<<endl;
    return 0;
}