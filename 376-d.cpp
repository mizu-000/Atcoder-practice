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
    int n,i,j,x,m,a,b;
    long long  int max_,count=-1;
    double moves,time;
    bool flag=false;
    
    string s;
    char c;
    cin>>n>>m;
    vector<vector<int>> v(n);

    for(i=0;i<m;i++){
        cin>>a>>b;
        v[a-1].push_back(b-1);
    }
    vector<int> dist(n,-1);
    queue<int> q;

    dist[0]=0;
    q.push(0);
    while(!q.empty()){
        x=q.front();
        q.pop();
        for(auto y:v[x]){
            if(dist[y]==-1){
                dist[y]=dist[x]+1;
                q.push(y);
            }
            if(y==0){
                count=dist[x]+1;
                break;
            }
        }
        if(count!=-1){
            break;
        }
    }
    
    cout<<count<<endl;
    return 0;

}

