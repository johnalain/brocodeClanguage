// # include <stdio.h>
// int main(){
//         const double pi = 3.14159;
//         double radius;
//         double circumference;
//         double area;

//         printf("\nEnter radius of a circle: ");
//         scanf("%lf", &radius);
//         circumference =  2 * pi *radius;
//         area = pi * radius * radius;
//         printf("circumference: %lf\n", circumference);
//         printf("area is : %lf\n", area);

//         return 0;
// }
// /*
// Enter radius of a circle: 4
// circumference: 25.132720
// area is : 50.265440
// */
//=================triangle==================
# include <stdio.h>
# include <math.h>
int main(){
        double A;
        double B;
        double C;
        printf("enter side A: ");
        scanf("%lf", &A);

        printf("enter side B: ");
        scanf("%lf", &B);

        printf("enter side C: ");
        scanf("%lf", &C);

        C = sqrt(A * A + B * B);
        printf("side C: %lf\n", C);

        return 0;
}
/*enter side A: 4
enter side B: 2
enter side C: 5
side C: 4.472136*/