#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<math.h>
#include<algorithm>

using namespace std;

int main(){
    int n,i,k,count=0;
    char j;
    int a[30];
    cin>>n>>k;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++){
        for(j='a';j<'z';j++){
            if(s[i]==j){
                int p=j;
                p-=97;
                a[p]++;
            }
        }
    }
    for(i=0;i<26;i++){
        cout<<a[i]<<endl;
    }
    
    

    return 0;

}