#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)
        count++;
    }
    if(count!=0)
    cout<<"the given number is not a prime number "<<endl;
    else 
    cout<<"the number entered is a prime number";
    return 0;
}