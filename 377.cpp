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
#include<queue>
#include <unordered_map>

using namespace std;




int main(){
    long long int n,i,j,k,x,m,a,b;
    long long int max_,count=0;
    double moves,time;
    bool flag=false;
    string s;
    char c[9][9];
    set<pair<long long int,long long int>> s1;

    cin>>n>>m;
    for(i=0;i<m;++i){
        cin>>a>>b;
        a--;b--;
        s1.insert({a,b});
        if(a>=2&&a<n-2&&b>=2&&b<n-2){
            s1.insert({a-2,b-1});
            s1.insert({a-1,b-2});
            s1.insert({a+1,b-2});
            s1.insert({a+2,b-1});
            s1.insert({a-2,b+1});
            s1.insert({a-1,b+2});
            s1.insert({a+1,b+2});
            s1.insert({a+2,b+1});
        }if(a==0){
            if(b==0){
                s1.insert({a+1,b+2});
                s1.insert({a+2,b+1});
            }else if(b==1){
                s1.insert({a+1,b+2});
                s1.insert({a+2,b+1});
                s1.insert({a+2,b-1});
            }else if(b>=2&&b<n-2){
                s1.insert({a+1,b+2});
                s1.insert({a+2,b+1});
                s1.insert({a+2,b-1});
                s1.insert({a+1,b-2});
            }else if(b==n-2){
                s1.insert({a+1,b-2});
                s1.insert({a+2,b-1});
                s1.insert({a+2,b+1});
            }else if(b==n-1){
                s1.insert({a+1,b-2});
                s1.insert({a+2,b-1});
            }
        }if(a==1){
            if(b==0){
                s1.insert({a+1,b+2});
                s1.insert({a+2,b+1});
                s1.insert({a-1,b+2});
            }else if(b==1){
                s1.insert({a+1,b+2});
                s1.insert({a+2,b+1});
                s1.insert({a-1,b+2});
                s1.insert({a+2,b-1});
            }else if(b>=2&&b<n-2){
                s1.insert({a+1,b+2});
                s1.insert({a+2,b+1});
                s1.insert({a-1,b+2});
                s1.insert({a+2,b-1});
                s1.insert({a+1,b-2});
                s1.insert({a-1,b-2});
            }else if(b==n-2){
                s1.insert({a+1,b-2});
                s1.insert({a+2,b-1});
                s1.insert({a-1,b-2});
                s1.insert({a+2,b+1});
            }else if(b==n-1){
                s1.insert({a+1,b-2});
                s1.insert({a+2,b-1});
                s1.insert({a-1,b-2});
            }
        }if(a>=2&&a<n-2){
            if(b==0){
                s1.insert({a-1,b+2});
                s1.insert({a-2,b+1});
                s1.insert({a+1,b+2});
                s1.insert({a+2,b+1});
            }else if(b==1){
                s1.insert({a-1,b+2});
                s1.insert({a-2,b+1});
                s1.insert({a+1,b+2});
                s1.insert({a+2,b+1});
                s1.insert({a+2,b-1});
                s1.insert({a-2,b-1});
            }else if(b==n-2){
                s1.insert({a-1,b-2});
                s1.insert({a-2,b-1});
                s1.insert({a+1,b-2});
                s1.insert({a+2,b-1});
                s1.insert({a-2,b+1});
                s1.insert({a+2,b+1});
            }else if(b==n-1){
                s1.insert({a-1,b-2});
                s1.insert({a-2,b-1});
                s1.insert({a+1,b-2});
                s1.insert({a+2,b-1});
            }
        }
        if(a==n-2){
            if(b==0){
                s1.insert({a-1,b+2});
                s1.insert({a-2,b+1});
                s1.insert({a+1,b+2});
            }else if(b==1){
                s1.insert({a-1,b+2});
                s1.insert({a-2,b+1});
                s1.insert({a+1,b+2});
                s1.insert({a-2,b-1});
            }else if(b>=2&&b<n-2){
                s1.insert({a-1,b+2});
                s1.insert({a-2,b+1});
                s1.insert({a+1,b+2});
                s1.insert({a-2,b-1});
                s1.insert({a-1,b-2});
                s1.insert({a+1,b-2});
            }else if(b==n-2){
                s1.insert({a-1,b-2});
                s1.insert({a-2,b-1});
                s1.insert({a+1,b-2});
                s1.insert({a-2,b+1});
            }else if(b==n-1){
                s1.insert({a-1,b-2});
                s1.insert({a-2,b-1});
                s1.insert({a+1,b-2});
            }
        }if(a==n-1){
            if(b==0){
                s1.insert({a-1,b+2});
                s1.insert({a-2,b+1});
            }else if(b==1){
                s1.insert({a-1,b+2});
                s1.insert({a-2,b+1});
                s1.insert({a-2,b-1});
            }else if(b>=2&&b<n-2){
                s1.insert({a-1,b+2});
                s1.insert({a-2,b+1});
                s1.insert({a-2,b-1});
                s1.insert({a-1,b-2});
            }else if(b==n-2){
                s1.insert({a-1,b-2});
                s1.insert({a-2,b-1});
                s1.insert({a-2,b+1});
            }else if(b==n-1){
                s1.insert({a-1,b-2});
                s1.insert({a-2,b-1});
            }
        }
    }
    count=n*n-s1.size();
    
    
    cout<<count<<endl;

    
    return 0;

}

