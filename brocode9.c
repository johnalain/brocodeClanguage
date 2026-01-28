# include <stdio.h>
# include <math.h>
# include <stdlib.h>
int main(){
        double A = sqrt(9);
        double B = pow(2, 4);
        int C = round(3.14);
        int D = ceil(3.14);
        int E = floor(5.99);
        double F = abs(-100);
        double G = log(3);
        double H = sin(45);
        double I = cos(45);
        double J = tan(45);
        printf("%lf\n", A);
        printf("%lf\n", B);
        printf("%d\n", C);
        printf("%d\n", D);
        printf("%d\n", E);
        printf("%lf\n", F);
        printf("%lf\n", G);
        printf("%lf\n", H);
        printf("%lf\n", I);
        printf("%lf\n", J);

        return 0;
}
/*output:
3.000000
16.000000
3
4
5
100.000000
1.098612
0.850904
➜  myPROJECTR clang brocode9.c -o brocode9
➜  myPROJECTR 
➜  myPROJECTR ./brocode9                  
3.000000
16.000000
3
4
5
100.000000
1.098612
0.850904
0.525322
1.619775*/