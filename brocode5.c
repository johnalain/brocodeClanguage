// https://youtu.be/87SH2Cn0s9A?t=2490
# include <stdio.h>
int main(){
        const float PI = 3.14159;
        PI = 34.1234567;
        printf("%f\n", PI); //give error pi declared as constant

        float PI = 3.14159;
        PI = 34.1234567;
        printf("%f\n", PI);// can change the value of PI
        return 0;
}