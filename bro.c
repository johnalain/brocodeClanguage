# include <stdio.h>
int main(){
        int age;
        printf("enter your age: ");
        scanf("%d", &age);

        if (age >=18){
                printf("you are signed in\n");
        }
        else if(age == 0){
                printf("you can not sign up you just born\n");
        }
        else if(age < 0){
                printf("you are not even born\n");
        }
        else{
                printf("you are too young\n");
        }
}
// you should add \n at the end of print statement to prevent printing % at the end 