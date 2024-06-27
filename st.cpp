#include<iostream>
using namespace std;
struct x{
    int rollno;
    string name;
};
int main(){
   struct x a,b,c;
   a.rollno=133;
   b.rollno=63;
   a.name="Mayank";
   b.name="himans";
   c=a;
   a=b;
   b=c;
   cout<<a.rollno<<"  "<<a.name<<endl;
   cout<<b.rollno<<"  "<<b.name<<endl;
   return 0;
}