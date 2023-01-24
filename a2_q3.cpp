#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space=n-i;
        while(space>0){
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
    return 0;
}
