#include<iostream>
#include<math.h>
using namespace std;
int dec(int n){
    int c=0,s=0,m;
    m=n;
    while(n>0){
        c++;
        n/=10;
    }
    for(int i=0;i<c;i++){
        s+=(pow(2,i)*(m%10));
        m/=10;
    }
    return s;
}
int main(){
    int b,d;
    cout<<"enter the binary number";
    cin>>b;
    d=dec(b);
    cout<<"the decimal form of the given binary number is "<<d;
    return 0;
}