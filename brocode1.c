# include <stdio.h>
int main(){
        int age = 21;//integer
        float gpa = 2.05; // floating point number
        char grade = 'c';
        char name[] = "ritajose";//array of characters cuz variable type in c doesn't include string
        //string is an object c laguage is not object oriented language doesn't support string
        printf("you are %d years old\n",age);
        printf("your grade is %c\n",grade);
        printf("%s\n",name);
        printf("Hello %s\n", name);
        printf("your age is %d\n", age);
        printf("your gpa is %f\n", gpa);
        return 0;
}
/*output:
you are 21 years old
your grade is c
ritajose
Hello ritajose
your age is 21
your gpa is 2.050000 */