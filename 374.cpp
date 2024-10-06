#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>
#include <cstdlib>
#include <bitset>


using namespace std;

int main(){
    long long int n,a,b,c,x,y,i,j,k,m;
    long long int max_,count=1000000000;
    bool flag=true;
    vector<long long int> v;
    string s,t;bitset<21> bit;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>b;
        v.push_back(b);
    }

    for(i=0;i<(1<<n);i++){
        bit=i;
        a=0;b=0;
        for(j=0;j<n;j++){
            if(bit.test(j))a+=v[j];
            else b+=v[j];
        }
        max_=max(a,b);
        count=min(count,max_);
    }
    cout<<count;
    
    return 0;

}

