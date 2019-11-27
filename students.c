#include <stdio.h>
void listallstudent(void){

}
void searchroll(void){

}
void searchname(){

}
void addstudent(){
    
}
int main(){
    int n;
     printf("This programme can perform following operations. Choose your operation and the respective number.\n");
        printf("1. Show list of all students.\n2. Find student by roll number.\n3. Find student by name.\n4. Add a new student.\n5. Quit the programme.\n");
    while(1>0){
       printf("Enter the number according your operation\n");
       scanf("%d",&n);
       switch (n)
       {
        case 1:
        printf("You choose to list all student\n");
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
            case 5:
            break;
        default:
        printf("Try again\n");
       }
    }
}