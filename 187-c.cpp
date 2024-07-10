#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

int main(){
    int n,i;
    int flag=0;
    cin>>n;
    set<string> a,b;
    vector<string> s;
    string z;

    for(i=0;i<n;i++){
        cin>>z;
        s.push_back(z);
        if(s[i].at(0)!='!'){
            a.insert(s[i]);
        }else{
            s[i].erase(s[i].begin());
            b.insert(s[i]);
        }
    }
    for(auto p:a){
        if(b.count(p)){
            cout<<p;
            flag=1;
            break;
        }
    }
    if(flag==1){
    }else{
        cout<<"satisfiable";
    }
    
    return 0;
    
}