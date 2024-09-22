#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int n,i,j,k;
    cin>>n>>k;
    vector<int> r(n),a(n);
    for(i=0;i<n;i++){
        cin>>r[i];
        a[i]=1;
    }
    while(1){
        int count=0;
        for(auto p:a){
            
            count+=p;
        }
        if(count%k==0){
            for(auto p:a){
                cout<<p<<" ";
            }
            cout<<endl;
        }
        a[n-1]++;
        
        for(i=n-1;i>0;i--){
            if(a[i]<=r[i]){
                break;
            }
            a[i]=1;
            a[i-1]++;
        }
        if(a[0]>r[0]){
            break;
        }
    }
    return 0;

}

