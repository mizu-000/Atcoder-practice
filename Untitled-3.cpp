#include<iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int w[1001];
    int x[1001];
    long int sum[24];
    cin>>n;
    int i,k;
    for(i=0;i<n;i++){
        cin>>w[i];
        cin>>x[i];
    }
    for(i=0;i<16;i++){
        sum[i]=0;
        for(k=0;k<n;k++){
            if(i<=x[k]&&x[k]<=i+8){
                sum[i]=w[k]+sum[i];
            }
        }
    }
    for(i=16;i<24;i++){
        sum[i]=0;
        for(k=0;k<n;k++){
            if(i<=x[k]&&x[k]<=i+8){
                sum[i]=w[k]+sum[i];
            }
            if(0<=x[k]&&x[k]<=i-16){
                sum[i]=w[k]+sum[i];
            }
        }
    }
    sort(sum, sum + 24, greater<int>());
    cout<<sum[0];
    return 0;

}