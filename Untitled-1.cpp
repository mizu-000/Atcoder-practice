#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int x;
    int i,j,k;
    int sum;
    int count=0;
    cin>>a>>b>>c;
    cin>>x;
    x=x/50;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            for(k=0;k<c;k++){
                sum=10*i+2*j+k;
                if(x==sum)count++;
            }
        }
    }
    cout<<count;
    return 0;
}