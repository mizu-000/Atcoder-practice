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
    long long int n,m,q,i,j,k,start,end,in;
    long long int max_,count=0;
    double moves,time;
    bool flag=false;
    
    string s;
    char c;
    cin>>n;
    cin>>s;
    map<string,int> x;
    x["1"]=0;
    x["2"]=0;
    max_=0;
    
    for(i=0;i<s.length();i++){
        if(flag==false){
            if(s[i]=='1'){
                x["1"]++;
            }
            if(s[i]=='/'){
                flag=true;
            }if(s[i]=='2'){
                x["1"]=0;
            }
        }else{
            if(s[i]=='2'){
                x["2"]++;
            }else{
                count=min(x["1"],x["2"])*2+1;
                max_=max(max_,count);
                x["1"]=0;
                x["2"]=0;
                if(s[i]=='1'){
                    x["1"]++;
                }
                flag=false;
            }
        }
    }
    if(flag){
        count=min(x["1"],x["2"])*2+1;
        max_=max(max_,count);
    }
    cout<<max_<<endl;
    
    
    return 0;
}

