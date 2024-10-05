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
    long long int n,b,c,s,x,y,i,j,k,m;
    long long int count=0;
    bool a[13][13],flag;
    cin>>n>>m;
    for(i=0;i<m;i++){
        cin>>x>>y;
        a[x-1][y-1]=a[y-1][x-1]=true;
    }
    int max_=0;
    for(i=0;i<(1<<n);i++){
        bitset<15> bit=i;
        flag=true;
        for(j=0;j<n;j++){
            for(k=0;k<j;k++){
                if(i!=j){
                    if( ((i>>j)&1) && ((i>>k)&1) && !a[j][k]){
                        flag=false;
                    }
                }
            }
        }
        if(flag)max_=max(max_,(int)bit.count());
    }
    cout<<max_;
    return 0;

}

