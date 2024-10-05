#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>
#include <cstdlib>
#include <bitset>


using namespace std;

int main(){
    long long int n,a,b,c,s,x,y,i,j,k,m;
    long long int count=0;

    cin>>n>>m;
    bitset<10> bit,bit2;
    vector<bitset<10>> bita;
    vector<int> p;
    for(i=0;i<m;i++){
        cin>>k;
        bit &= 0;
        for(j=0;j<k;j++){
            cin>>s;
            s--;
            bit.set(s,1);
        }
        bita.push_back(bit);
    }
    for(i=0;i<m;i++){
        cin>>s;
        p.push_back(s);
        
    }
    
    for(i=0;i<(1<<n);i++){
        for(j=0;j<m;j++){
            bit2=i;
            bit=bita[j] & bit2;
            if(bit.count()%2 !=p[j])break;
            
            if(j==m-1){count++;}
        }
    }
    cout<<count;
    return 0;

}

