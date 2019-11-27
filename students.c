#include <stdio.h>
#include <stdlib.h>
struct student{
    char str[20];
    int roll;
    int class;
    char sec;
}std[40];
void add(int x){
    for(int i=0; i<x; i++){
    printf("Enter the name,class and roll no. respectively\n");
    scanf("%s",std[i].str);
    scanf("%d",&std[i].class);
    //scanf("%c",&std[i].sec);
    scanf("%d",&std[i].roll);
    }
}
void listallstudent(void){
    for(int i=0; i<40; i++){
        
        printf("%s\n",std[i].str);
        printf("%d\n",std[i].class);
        //printf("%c",std[i].sec);
        printf("%d\n",std[i].roll);
    }
    
}
void searchroll(void){
    int r;
    printf("Enter the roll of student\n");
    scanf("%d",&r);
    for(int i=0; i<40; i++){
        if(r == std[i].roll){
            printf("Name-%s\nClass-%d\n",std[i].str,std[i].class);
        }
    }

}
void searchname(void){
    char str1[20];
    printf("Enter the name of the student\n");
    scanf("%s",str1);
    for(int i=0; i<40; i++){
        if(strcmp(str1,std[i].str) == 0){
            printf("Name-%s\nClass-%d\nRoll no-%d\n",std[i].str,std[i].class,std[i].roll);
        }
    }
}
void addstudent(void){
    int s;
    printf("Enter the number of students\n");
    scanf("%d",&s);
    add(s);
}
int main(){
    int n,s,t;
     printf("This programme can perform following operations. Choose your operation and the respective number.\n");
        printf("1. Show list of all students.\n2. Find student by roll number.\n3. Find student by name.\n4. Add a new student.\n5. Quit the programme.\n");
    while(1>0){
       printf("Enter the number according your operation\n");
       scanf("%d",&n);
       switch (n)
       {
        case 1:
        printf("You choose to list all student\n");
        printf("Here is the list of all student\n");
           listallstudent();
            break;
        case 2:
            printf("You want to search student by roll no. enter the roll no.\n");
            searchroll();
            break;
        case 3:
        printf("You want to search student by name enter the name\n");
           searchname();
            break;
        case 4:
        printf("You want to add new student details\n");
           addstudent();
            break;
        default:
        printf("");
       }
       if(n == 5){
           break;
       }
    }
}