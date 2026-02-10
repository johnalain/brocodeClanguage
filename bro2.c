# include <stdio.h>
int main(){
        char grade;
        printf("\nEnter a letter grade: ");
        scanf("%c", &grade);
        switch (grade)
        {
        case 'A':
                printf("perfect\n");
                break;
         case 'B':
                printf("YOU DID GOOD\n");
                break;
         case 'C':
                printf("you did okay\n");
                break;
         case 'd':
                printf("at least it is not F\n");
                break;
         case 'F':
                printf("you failed\n");
                break;

        default:
                printf("please enter a valid grade");
                break;
        }
        return 0;
}