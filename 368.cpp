#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    long long int n,i,j,t;
    cin>>n;
    vector<long long int> a(n);
    t=0;
    for(i=0;i<n;i++){
        cin>>a[i];   
        if(t%3==1){
            a[i]--;
            t++;
        }
        if(a[i]>0){
            if(t%3==2){
                a[i]-=3;
                t++;
            }
        }
        if(a[i]>0){
            t+=a[i]/5*3;
            if(a[i]%5==4){
                t+=3;
            }else{
                t+=a[i]%5;
            } 
        }
        
        
    }
    
    
    cout<<t;
    
    return 0;

}

