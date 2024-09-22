#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int n,i,j,k,t,g,h;
    cin>>n>>g;
    bool a[9][9], b[9][9];
    for(i=0;i<g;i++){
        cin>>j>>t;
        j--;t--;
        a[j][t]=a[t][j]=true;
    }
    cin>>h;
    for(i=0;i<h;i++){
        cin>>j>>t;
        j--;t--;
        b[j][t]=b[t][j]=true;
    }
    long long int c[9][9];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            cin>>c[i][j];
        }
    }

    long long int Min ;
    long long cost=0;


    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i][j]!=b[i][j]){
                cost += c[i][j];
            }
        }
    }
    Min=cost;

    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            int m=i+k;
            if(m>=5)m-=5;
            for(j=i+1;j<n;j++){
                int s=j+k;
                if(s>=5)s-=5;
                if(a[i][j]!=b[m][s]){
                    cost += c[m][s];
                }
            }
        }
        Min = min(Min, cost);
    }
    cout<<Min;
    return 0;

}

