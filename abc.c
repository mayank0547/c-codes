#include<stdio.h>
int main(){
    int i;
    for(i=0;i<2;i++){
       switch(i){
        case 1: printf("1");
        case 0: printf("0");
        default : printf("2");
       }
    }
}