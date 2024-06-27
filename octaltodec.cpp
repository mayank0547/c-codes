#include<iostream>
using namespace std;
int octtodec(int n){
    int a,c=0,t=1;
    while(n>0){
        a=n%10;
        c+=a*t;
        t*=8;
        n/=10;
    }
    return c;
}
int main(){
    int n;
    cout<<"enter the number \n";
    cin>>n;
    cout<<"\nthe decimal number corresponding to the given octal number is "<<octtodec(n);
    return 0;
}