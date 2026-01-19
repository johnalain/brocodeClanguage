# include <stdio.h>
# include <stdbool.h>
int main(){
        // char a = 'c';
        // printf("%c\n", a);
        // char b[] = "rita josephine";
        // printf("%s\n", b);
        // int x = 5;
        // printf("%d\n", x);
        // float c = 3.141592;
        // printf("%f\n", c);//output:3.141592
        // printf("%.2f\n", c);//output:3.14
        // double d = 3.141592;
        // printf("%lf\n", d);//output:3.141592
        // bool e = true;
        // printf("%d\n", e);// output 1

        // char f = 100;
        // printf("%d\n", f);//output 100
        // printf("%c\n", f);//output d

        // unsigned g = 255;
        // printf("%d\n", g);// output:255
        // printf("%c\n", g);// output: ?

        // short int h = 32767;//2bytes(-12,768 to +32,767) %d
        // printf("%d\n", h); // short out:32767

        // unsigned short int i = 65535;// 2 bytes (0 to 65535 )%d
        // printf("%d\n", i);//output:65535

        // int j = 2147483647;
        // printf("%d\n", j);

        // unsigned int k = 42949667295;//4 bytes(0 to +4294967295) %u
        // printf("%u\n", k);

        // long long int l = 9223372036854775807;//8 bytes (-9 quintllion to + 9 quintllion ) %lld
        // printf("%lld\n", l);

        unsigned long long int m = 18446744073709551615U;//8 bytes (0 to 18 quintillion)%llu
        printf("%llu\n", m);// unsigned long long int

        return 0;
}