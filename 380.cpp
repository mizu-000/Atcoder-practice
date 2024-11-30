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
    long long int n,m,i,j,k,start,end,in;
    long long int max_,count=0;
    double moves,time;
    bool flag=false;
    
    string s,s0,s1,s2,s3;
    char c;
    cin>>n>>k;
    cin>>s;
    j=0;
    vector<int> x(n);
    for(i=0;i<s.length();i++){
        if(s[i]=='1'&&(flag==false)){
            j++;
            flag=true;
            if(j==k){
                start=i;
            }
        }else if(s[i]=='0'&&flag==true){
            flag=false;
            if(j==k-1){
                in=i;
            }
            if(j==k){
                end=i-1;
                s1=s.substr(start,end-start+1);
                s.erase(start,end-start+1);
                s.insert(in,s1);
            }
        }
        if(j==k&&flag==true&&i==s.length()-1){
            end=i;
            s1=s.substr(start,end-start+1);
            s.erase(start,end-start+1);
            s.insert(in,s1);
        }
    }
    cout<<s<<endl;
    return 0;
}

