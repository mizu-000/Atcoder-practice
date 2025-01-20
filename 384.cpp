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
    long long int max_,count=0;
    bool flag=false;
    int h,w,r;
    string s;
    vector<pair<int,string>> score;
    int a[5];
    set<pair<int,int>> b;
    string c="ABCDE";
    queue<pair<int,int>> que;
    pair<int,int> p;
    
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    for(int bit = 1; bit < (1<<5); bit++){
        count=0;
        s="";
        for(i=0;i<5;i++){
            if(bit & (1<<i)){
                count+=a[i];
                s+=c[i];
            }
        }
        score.push_back(make_pair(count,s));
    }
    sort(score.rbegin(),score.rend());
    count=score[0].first;k=0;
    for(i=1;i<31;i++){
        if(count==score[i].first){
            flag=true;
            
        }
        if(flag&&count!=score[i].first){
            sort(score.begin()+k,score.begin()+i);
            flag=false;
        }
        if(!flag){
            count=score[i].first;
            k=i;
        }
    }
    if(flag){
        sort(score.begin()+k,score.end());
    }
    for(auto x:score){
        cout<<x.second<<endl;
    }
    
    return 0;
}

