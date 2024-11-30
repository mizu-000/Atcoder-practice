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

int First(set<int> a){
    cout<<"次の数字から電気を仕掛ける番号を選んでください"<<endl;
    for(auto p:a){
        cout<<p<<":";
    }
    cout<<endl;
    int q;
    cin>>q;
    return q;
}

int Second(set<int> a){
    cout<<"次の数字から座る番号を選んでください"<<endl;
    for(auto p:a){
        cout<<p<<":";
    }
    cout<<endl;
    int q;
    cin>>q;
    return q;
}

int main(){
    int i,j,k,attack,defense;
    set<int> a={1,2,3,4,5,6,7,8,9,10,11,12};
    int team1,team2;
    team1=team2=0;
    for(i=0;i<13;i++){
        attack=First(a);
        defense=Second(a);
        if(attack==defense){
            cout<<"OUT"<<endl;
            if(i%2==0){
                team1=0;
            }else{
                team2=0;
            }
        }else{
            cout<<"SAFF"<<endl;
            a.erase(defense);
            if(i%2==0){
                team1+=defense;
            }else{  
                team2+=defense;
            }
        }
        cout<<"現在のスコア"<<endl;
        cout<<"team1:"<<team1<<endl;   
        cout<<"team2:"<<team2<<endl;
    }


}
