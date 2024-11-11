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
    long long int n,i,x,y,j,k,m;
    long long  int max_,count=0;;
    double moves,time;
    bool flag=true;
    vector<pair<char,long long int>> v;
    map<int,vector<long long int>> v2;
    
    string s;
    cin>>s;
    n=s.length();
    for(i=0;i<n;i++){
        //v.push_back(pair(s[i],i));
        k=s[i]-'A';
        v2[k].push_back(i);
    }


    for(auto p:v2){
        auto q=p.second;
        if(q.size()>0){
            for(i=0;i<q.size()-1;i++){
                for(j=i+1;j<q.size();j++){
                    k=q[j]-q[i]-1;
                    
                    count+=k;

                }
            }
        }

    }
    cout<<count;

    
    return 0;

}

