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


using namespace std;




int main(){
    int n,i,x,y,j,k,m;
    int max_;
    double moves,time;
    bool flag=true;
    vector<int> p;
    vector<int> a,b,c,d;
    vector<double> movet;
    int s,t;
    double timeall=10000000000;
    cin>>n>>s>>t;
    for(i=0;i<n;i++){
        cin>>x>>y>>j>>k;
        a.push_back(x);
        b.push_back(y);
        c.push_back(j);
        d.push_back(k);
        movet.push_back((sqrt((x-j)*(x-j)+(y-k)*(y-k)))/t);
        p.push_back(i);
    }
    do {
        for(i=0;i<(1<<n);i++){
            bitset<8> bit=i;
            time=0;
            k=0;m=0;
            for(j=0;j<n;j++){
                if(bit.test(j)){
                    x=a[p[j]];y=b[p[j]];
                }else{
                    x=c[p[j]];y=d[p[j]];
                }
                moves=(sqrt((x-k)*(x-k)+(y-m)*(y-m)))/s;
                time+=moves+movet[p[j]];
                if(bit.test(j)){
                    k=c[p[j]];m=d[p[j]];
                }else{
                    k=a[p[j]];m=b[p[j]];
                }
            }
            timeall=min(timeall,time);
        }
        
        
    } while(next_permutation(p.begin(),p.end()));

    cout<<fixed << setprecision(10)<<timeall;
    
    return 0;

}

