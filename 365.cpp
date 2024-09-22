#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int n,i,j,k;
    long long int p;
    cin>>n;
    vector<pair<long long int,int>> a;
    for(i=0;i<n;i++){
        cin>>p;
        a.push_back(make_pair(p,i+1));
    }
    sort(a.rbegin(),a.rend());
    cout<<a.at(1).second;
    return 0;

}