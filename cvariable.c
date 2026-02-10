# include <stdio.h>
int main(){
        // if (sizeof(int)> 19999919991)
        //         printf("True\n");
        // else
        //         printf("False\n");
       
 int a, b = 1, c = 1;
 c = ++b + 1;
 a = sizeof(c);

 printf("a= %d,b= %d,c= %d\n", a, b, c);}