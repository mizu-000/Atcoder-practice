#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    long long int n,x,y,i,suma,sumb;
    cin>>n>>x>>y;
    int flag=0;
    vector<long long int>  a,b;

    for(i=0;i<n;i++){
        cin>>suma;
        a.push_back(suma);
    }
    for(i=0;i<n;i++){
        cin>>sumb;
        b.push_back(sumb);
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    suma=0;sumb=0;
    for(i=0;i<n;i++){
        suma+=a.at(i);sumb+=b.at(i);
        if(suma>x||sumb>y){
            cout<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<n;
    }

    return 0;

}