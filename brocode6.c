# include <stdio.h>
int main(){
        //arithmetic operators
        // + addition
        // - substraction
        // * multiplication
        // / division
        // % modulus
        // ++ increment
        // -- decrement

        int x = 5;
        int y = 2;
        int z = x + y;
        int z1 = x - y;
        int z2 = x * y;
        int z3 = x / y;
        float z4 = x / y;
        float z5 = x / (float)y;
        int z6 = x % y;

        printf("%d\n", z);//out 7
        printf("%d\n", z1);//out 3
        printf("%d\n", z2);// out 10
        printf("%d\n", z3);//out 2
        printf("%f\n", z4);//out 2.000000
        printf("%f\n", z5);//out 2.500000
        printf("%d\n", z6);//out 1
        x++;
        printf("%d\n", x);// out 6
        y--;
        printf("%d\n", y);//out 1
        return 0;
}