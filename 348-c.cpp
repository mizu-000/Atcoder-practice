#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main(){
    int n,i;
    cin>>n;
    long long int a,c,min,k;
    
    vector<pair<long long int,long long int>> pair,pair2;
    for(i=0;i<n;i++){
        cin>>a>>c;
        pair.push_back({c,a});
    }
    sort(pair.begin(),pair.end());
    k=0;
    for(i=0;i<n;i++){
        if(k!=pair[i].first){
            pair2.push_back({pair[i].second,pair[i].first});
            k=pair[i].first;
        }
    }
    sort(pair2.rbegin(),pair2.rend());
    cout<<pair2[0].first;
    return 0;
}