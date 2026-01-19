#include <stdio.h>
int main(){
        // format specifier % defines and formats type of data to be displayed
        // %c = character
        // %s = string (array of charcters)
        // %f = float
        // %lf = double
        // %d  = integer

        // %.1 = decimal prcision
        // %l = minimum field width
        // %- = left align

        float item1 = 5.75;
        float item2 = 10.00;
        float item3 = 100.99;

        printf("item 1: $%f\n", item1);//output:item 1: $5.750000
        printf("item 1: $%.2f\n", item1);//ouput: item 1: $5.75
        printf("item 2: $%.2f\n", item2);
        printf("item 3: $%.2f\n", item3);

        printf("item 1: $%8.2f\n", item1);//minimum width
        printf("item 2: $%-8.2f\n", item2);
        printf("item 3: $%-8.2f\n", item3);//-8 align output
        return 0;
}