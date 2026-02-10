// # include <stdio.h>
// int main(){
//         char str[] = "programiz"; // similar to array length 9 characters
//         printf("%s\n", str);
//         printf("hello world\n");//output:
//         //programiz
//         // hello world
//         return 0;
// }

// string input from user
// # include <stdio.h>
// int main(){
//         char str[20]; // declaring an array 20 the length of array
//         printf("enter your name: ");
//         // scanf("%s", str);// will print first name
//         fgets(str, sizeof(str), stdin);// to print first and last name use fgets() stdin means standard input
//         // access character of a string

//         printf("%s\n", str);
//         return 0;
// }

// # include <stdio.h>
// int main(){
//         char str[20] = "programiz";
// // access character of a string
//         printf("%c\n", str[0]);//output p
//         printf("%c\n", str[1]);
//         printf("%c\n", str[2]);
//         printf("%c\n", str[3]);}
       
//output:p
// p
// r
// o
// g
// change character of a string
       
# include <stdio.h>
int main(){
        char str[] = "programiz";
        str[2] = 'O';
        str[4] = 'R';
        printf("%s\n", str);//output:prOgramiz and prOgRamiz
}
