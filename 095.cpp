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
    long long int a,b,c,x,y,i,j,k;
    long long int count=0;

    cin>>a>>b>>c>>x>>y;

    if(a+b>=c*2){
        count+=min(x,y)*c*2;
        j=min(x,y);
        x-=j;
        y-=j;
    }
    if(x>0&&a>c*2){
        count+=x*c*2;
        x=0;
    }else if(x>0&&a<=c*2){
        count+=x*a;
        x=0;
    }if(y>0&&b>c*2){
        count+=y*c*2;
        y=0;
    }else if(y>0&&b<=c*2){
        count+=y*b;
        y=0;
    }

    cout<<count;
    
    return 0;

}

