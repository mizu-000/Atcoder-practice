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
    long long int n,m,q,i,j,d,k,r,l;
    long long int max_,count=0,ans=0;
    bool flag=false;
    int h,w,r,x,y;
    char c[1001][1001];
    string s;
    set<int> b;
    pair<int,int> start,end;
    queue<pair<int,int>> que;
    
    cin>>h>>w;
    for(i=0;i<h;i++){
        cin>>s;
        for(j=0;j<w;j++){
            c[i][j]=s[j];
            if(s[j]=='S'){
                start=make_pair(i,j);
            }
            if(s[j]=='G'){
                end=make_pair(i,j);
            }
        }
    }

    
    

    
    
    return 0;
}

