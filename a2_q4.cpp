#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=n; 
    while(i>0){
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
        i--;
        cout<<endl;
    }
    return 0;
} 
