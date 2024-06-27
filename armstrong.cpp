#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,p,s=0;
    cin>>n;
    p=n;
    while(n>0){
        s+=pow(n%10,3);
        n/=10;
    }
    if(p=s)
    cout<<s<<" is an armstrong number";
    return 0;

}