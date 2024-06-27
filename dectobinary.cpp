#include<iostream>
#include<math.h>
using namespace std;
void bin(int a){
    int k=0,s=0;
    int b=a;
    while(b>0){
       k++;
       b/=2; 
    }
    for(int i=0;i<=k;i++){
        s+=(a%2)*pow(10,i);
        a/=2;
    }
    int reverse=0;
    while(s>0){
        reverse=reverse*10+s%10;
        s/=10;
    }
    int c=reverse;
    int z=0;
    while(c>0){
        z++;
        c/=2;
    }
    int m=k-z;
    if(z==0)
    cout<<reverse;
    else{
       reverse*=pow(10,m); 
       cout<<reverse;
    }
}
int main(){
    int n;
    cout<<"enter the number to be converted into binary ";
    cin>>n;
    bin(n);
    return 0;
}