#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sp=1,st=n/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=st+1;j++){
           cout<<"*";
        }
        for(int j=1;j<=sp;j++){
            cout<<" ";
        }
        for(int j=1;j<=st+1;j++){
            cout<<"*";
        }
        if(i<=n/2){
            st--;
            sp=sp+2;
        }else{
            sp=sp-2;
            st++;
        }
        cout<<endl;
    }
    return 0;
}
