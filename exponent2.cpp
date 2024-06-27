#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    while(n>1){
        if(n%2!=0){
            c++;
        break;
        }
        n/=2;
    }
    if(c==0)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}