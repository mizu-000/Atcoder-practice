#include<iostream>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main(){
    int n,m,i,j,k;
    cin>>n>>m;
    vector<string> s(n);
    set<int> num[10],qwe;
    int count,min=10;

    for(i=0;i<n;i++){
        cin>>s[i];
    }
    for(i=0;i<n;i++){
        for(k=0;k<m;k++){
            if(s[i].at(k)=='o'){
                num[i].insert(k);
            }
        }
    }
    for(i=1;i<=(1<<n);i++){
        count=0;
        qwe.clear();
        for(j=0;j<n;j++){
            if(i&(1<<j)){
                for(auto p:num[j]){
                  qwe.insert(p);
                }
                count++;
            }
            
        }
        if(qwe.size()==m){
            if(min>count)min=count;
        }
    }
    cout<<min<<endl;
    return 0;
}
