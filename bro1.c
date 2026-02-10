# include <stdio.h>
int main(){
        char grade;
        printf("\nEnter a letter grade: ");
        scanf("%c", &grade);
        if(grade == 'A'){
                printf("perfect !\n");
        }
        else if(grade == 'B'){
                printf("you did good !\n");
        }
        else if(grade == 'C'){
                printf("you did okay !\n");
        }
          else if(grade == 'D'){
                printf("at least not F !\n");
        }
          else if(grade == 'F'){
                printf("you failed !\n");
        }
        else{
                printf(" thats not a valid grade\n");

        }
        return 0;
}