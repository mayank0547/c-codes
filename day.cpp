#include <iostream>
using namespace std;

int main(){
    int day,month,year;
    cin>>day>>month>>year;
    char days={'Monday','Tuesday','Wednesday','Thusday','Friday','Saturday','Sunday'};
    if(year%100==0){
        if(year%400==0){
            cout<<"Leap year";
        }else{
            cout<<"NLY";
        }
    }else{
        cout<<"NLY";
    }
    return 0;
}