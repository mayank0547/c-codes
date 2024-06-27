#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int x,s=1,t=0,y,c;
    cout<<"enter the range for which ramajun is to be find\n";
    cin>>x>>y;
  
    for(int k=x;k<=y;k++)
    {
           c=pow(k,1.0/3.0);
    for(int i=1;i<=c;i++)
    {
        while(pow(i,3)+pow(s,3)<=k)
        {
            if(pow(i,3)+pow(s,3)==k){
                t++;
            }
            s++;
        }
        s=1;

    
    }            if(t>2)
    cout<<k<<" is ramajunan number\n";
    t=0;
    }
    return 0;
}