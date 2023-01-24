#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=1,fibn=0,y=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==2 && j==1){
                cout<<"1"<<"\t";
                continue;
            }else{
                cout<<fibn<<"\t";
                fibn=y+x;
                y=x;
                x=fibn;
            }
        }
        cout<<endl;
    }
    return 0;
}
