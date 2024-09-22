#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int n,q,x,i,j,k,t,g,h,m;
    string s;
    string c;
    int count=0;
    set<int> d;
    cin>>n>>q;
    cin>>s;
    for(i=0;i<n-2;i++){
        if(s[i]=='A'){
            if(s[i+1]=='B'){
                if(s[i+2]=='C'){
                    count++;
                    d.insert(i);
                }
            }
        }
    }
    for(j=0;j<q;j++){
        cin>>x>>c;
        s.replace(x-1,1,c);
        t=x-1;
        if(x-2>=0)t=x-2;
        if(x-3>=0)t=x-3;
        if(x-3>=0&&d.contains(x-3)){
            d.erase(x-3);
            
        }if(x-2>=0&&d.contains(x-2)){
            d.erase(x-2);
            
        }if(d.contains(x-1)){
            d.erase(x-1);
        }
        for(i=0;i<=3;i++){
            if(t+i+2==n)break;
            if(s[t+i]=='A'){
                if(s[t+i+1]=='B'){
                    if(s[t+i+2]=='C'){
                        count++;
                        d.insert(t+i);
                    }
                }
            }
        }
        cout<<d.size()<<endl;
    }

    
    return 0;

}

