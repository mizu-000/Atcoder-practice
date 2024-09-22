#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    long long int n,i,j,k;
    cin>>n;
    vector<long long int> q,x;
    map<long long int,long long int> y;
    for(i=0;i<n;i++){
        cin>>j;
        if(j!=3)cin>>k;
        if(j==1){
            y[k]++;
        }if(j==2){
            y[k]--;
            if(y[k]==0){
                y.erase(k);
            }
        }if(j==3){
            cout<<y.size()<<endl;
        }
    }
    
    
    return 0;

}