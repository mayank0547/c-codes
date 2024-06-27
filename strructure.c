#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float gpa;
};
int main(){
     struct student s[5],a;
     int i,j;
     printf("enter the detailes:\n");
     for(i=0;i<5;i++){
        printf("student %d\n",i+1);
        scanf("%d\n%s\n%f",&s[i].rollno,s[i].name,&s[i].gpa);
     }
     for(i=0;i<4;i++){
        for(j=i;j<5;j++){
            if(s[j].gpa<s[i].gpa){
                a=s[i];
                s[i]=s[j];
                s[j]=a;
            }
        }
     }
     printf("\n top 3 students are\n");
     for(i=0;i<3;i++){
       printf("student %d \nroll no : %d \n name : %s\n gpa : %f\n",i+1,s[i].rollno,s[i].name,s[i].gpa);
     }
     return 0;
}