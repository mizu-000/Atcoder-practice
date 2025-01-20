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
    double moves,time;
    bool flag=false;
    int h,w;
    string s;
    cin>>h>>w>>d;
    vector<pair<int,int>> a,move;
    vector<int> t(n),v(n);
    set<pair<int,int>> b;
    int c[1001][1001];

    queue<pair<int,int>> que;
    pair<int,int> p;
    move.push_back(make_pair(0,1));
    move.push_back(make_pair(1,0));
    move.push_back(make_pair(0,-1));
    move.push_back(make_pair(-1,0));
    for(i=0;i<h;i++){
        cin>>s;
        for(j=0;j<w;j++){
            if(s[j]=='H'){
                b.insert(make_pair(i,j));
                que.push(make_pair(i,j));
                c[i][j]=0;
            }else if(s[j]=='#'){
                c[i][j]=-2;
            }else{
                c[i][j]=-1;
            }
        }
    }

    while(!que.empty()){
        p=que.front();
        que.pop();
        if(c[p.first][p.second]==d)continue;
        for(auto x:move){
            if(c[p.first+x.first][p.second+x.second]!=-2&&c[p.first+x.first][p.second+x.second]!=0){
                if(c[p.first+x.first][p.second+x.second]==-1||c[p.first+x.first][p.second+x.second]>c[p.first][p.second]+1){
                    c[p.first+x.first][p.second+x.second]=c[p.first][p.second]+1;
                    que.push(make_pair(p.first+x.first,p.second+x.second));

                }
                b.insert(make_pair(p.first+x.first,p.second+x.second));
            }
        }
    }
    
    cout<<b.size()<<endl;
    
    
    return 0;
}

