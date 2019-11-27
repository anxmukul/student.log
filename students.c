#include <stdio.h>
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
           listallstudent();
            break;
        case 2:
            searchroll();
            break;
        case 3:
           searchname();
            break;
        case 4:
           addstudent();
            break;
        default:
        printf("Try again\n");
       }
    }
}