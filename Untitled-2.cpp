#include<iostream>
using namespace std;
int main(){
    int i;
    int N;
    int a[110];
    int count=0;
    bool flag=false;
    cin>>N;
    for(i=0;i<N;i++){
        cin>>a[i];
    }
    while(true){
        for(i=0;i<N;i++){
            if(a[i]%2==1){
                flag=true;
                break;
            }
            else{
                a[i]=a[i]/2;
            }
        }
        if(flag)break;

        count++;


    }
    cout<<count;

    return 0;
}