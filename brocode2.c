//https://youtu.be/87SH2Cn0s9A?t=1632
# include <stdio.h>
# include <stdbool.h>
int main(){
        char a = 'c';// single character %c
        char b[] = "rita josephine";//array of characters %s
        float c = 3.141592;//4 bytes (32 bits of precision) 6 - 7 %f
        double d = 3.141592653589793; // 15 - 16 digits %1f
        unsigned int k = 4294967295L;
        printf("double is %1f\n", d);
        printf("unsigned int is %u\n", k);
        printf("this is a float %.2f\n", c);
        return 0;
}