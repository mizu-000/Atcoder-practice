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
#include <queue>

using namespace std;

int main(){
    long long int n,m,q,i,j,d,k,start,end,right,left,mid;
    long long int max_,count=1;
    bool flag=false;
    //int h,w,r,x,y;
    char c[101][101];
    int a[3001],size,p,dis;
    string t;
    set<int> b;
    queue<pair<int,int>> que;
    
    for(i=0;i<3001;i++){
        a[i]=0;
    }

    cin>>n;
    vector<pair<int,int>> h(n);
    for(i=0;i<n;i++){
        cin>>j;
        h[i]=make_pair(j,i);
        b.insert(j);
        a[j]++;
    }
    sort(h.begin(),h.end());
    p=0;
    max_=1;
    for(auto x:b){
        size=a[x];
        for(i=0;i<size;i++){
            if(max_>=size-i)break;
            for(j=i+1;j<size;j++){
                
                dis=h[p+j].second-h[p+i].second;
                for(k=j;k<size;k++){
                    if(h[p+k].second==h[p+i].second+dis*count){
                        count++;
                    }
                    if(h[p+k].second>h[p+i].second+dis*count){
                        break;
                    }
                    
                    
                }             
                max_=max(max_,count);
                count=1;
                if(max_>=size-j)break;
            }
            
        }
        p+=size;
    }
    cout<<max_<<endl;
    
    return 0;
}

