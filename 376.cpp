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
    long long int n,i,j,x;
    long long  int max_,count=0;
    double moves,time;
    bool flag=false;
    
    string s;
    char c;
    cin>>n;
    vector<long long int> a,b;
    
    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<n-1;i++){
        cin>>x;
        b.push_back(x);
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    x=0;
    for(i=0;i<n-1;i++){
        if(!flag){
            if(a[i]>b[i]){
                x=a[i];
                flag=true;
            }            
        }else{
            if(a[i]>b[i-1]){
                x=-1;
                break;
            }
        }
    }
    if(flag){
        if(a[n-1]>b[n-2]){
            x=-1;
        }
    }
    if(x==0){
        x=a[n-1];
    }
    cout<<x<<endl;
    return 0;

}

