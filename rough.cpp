#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j=0;
    while(n>1){
        if(n%2!=0){
            cout<<"no";
            j=1;
        
        break;}
    if(n>1)
    n=n/2;
    else
    break;
    }
    if(j==0){
        cout<<"yes";
    }
    return 0;
}