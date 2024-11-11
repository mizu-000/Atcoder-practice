#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>
#include <cstdlib>
#include <bitset>
#include <iomanip>
#include <unordered_map>

using namespace std;




int main(){
    long long int n,m,i,j,k;
    long long int max_,count=0;
    double moves,time;
    bool flag=false;
    
    string s;
    char c;
    cin>>n>>m;
    vector<pair<long long int,long long int>> x(m);
    for(i=0;i<m;i++){
        cin>>x[i].first;
        
    }
    for(i=0;i<m;i++){
        cin>>x[i].second;
        count+=k;
    }
    if(count!=n){
        flag=true;
    }
    sort(x.begin(),x.end());
    if(x[0].first!=1){
        flag=true;
    }
    count=0;
    for(i=0;i<m-1;i++){
        j=x[i+1].first-x[i].first;
        x[i].second--;
        if(j-1>x[i].second)flag=true;
        count+=((2*x[i].second-(j-1))*j)/2;
        x[i+1].second+=x[i].second-j+1;
    }
    j=n-x[m-1].first;
    x[m-1].second--;
    if(j-1>x[i].second)flag=true;
    count+=((2*x[m-1].second-(j-1))*j)/2;

    if(flag){
        cout<<-1;
    }else{      
        cout<<count;
    } 
    return 0;

}

