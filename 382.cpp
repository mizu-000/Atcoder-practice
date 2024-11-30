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
    long long int n,m,q,i,j,d,k,start,end,right,left,mid;
    long long int max_,count=0;
    double moves,time;
    bool flag=false;
    
    string s;
    char c;
    cin>>n>>m;
    vector<pair<int,int>> a;
    vector<int> b(m);
    for(i=0;i<n;i++){
        cin>>j;
        if(i==0){
            a.push_back(make_pair(j,1));
            count=j;
        }
        if(count>j){
            a.push_back(make_pair(j,i+1));
            count=j;
        }
    }
    for(i=0;i<m;i++){
        cin>>d;
        left=0;
        right=a.size()-1;
        mid=a.size()/2;
        if(d>=a[0].first){
            cout<<a[0].second<<endl;
            flag=true;
        }
        if(d<a[a.size()-1].first){
            cout<<-1<<endl;
            flag=true;
        }
        while(flag==false){
            if(a[mid].first==d){
                cout<<a[mid].second<<endl;
                flag=true;
            }else if(a[mid].first>d){
                left=mid;
                mid=(left+right)/2;
            }else{
                if(a[mid-1].first>d){
                    cout<<a[mid].second<<endl;
                    flag=true;
                }
                right=mid;
                mid=(left+right)/2;
            }
        }
        
        flag=false;
    }
    
    
    
    return 0;
}

