#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<math.h>

using namespace std;

int main(){
    long long int n,i,suml,sumr;
    cin>>n;
    vector<long long int>l(n),r(n),x(n);
    suml=0;sumr=0;
    for(i=0;i<n;i++){
        cin>>l[i]>>r[i];
        suml +=l[i];
        sumr +=r[i];
    }
    if(suml<=0&&0<=sumr){
        
    }
    else{
        cout<<"No";
    }

}