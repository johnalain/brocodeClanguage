// # include <stdio.h>
// int main(){
//         int numbers[5] = {1, 3, 5, 7,9};
        // for (int i = 0; i < 5;++i){
                // printf("%d\n", numbers[i]);
                //output:
                // 1
                // 2
                // 3
                // 4
                // 5
                // printf("%d = %p\n", numbers[i],&numbers[i]);
                //output:
//1 = 0x7ff7b844b3a0
// 2 = 0x7ff7b844b3a4
// 3 = 0x7ff7b844b3a8
// 4 = 0x7ff7b844b3ac
// 5 = 0x7ff7b844b3b0
        // }
        // printf("array address: %p\n", numbers);
        //output: array address: 0x7ff7b77613a0
        //the address of the array is same as the address of 1st element
        // printf("array address: %p\n", numbers +1);
        //array address: 0x7ff7b49753a4
        //you can use numbers + 2 to print address of 2nd element
        // printf("array address of 1: %p\n", numbers );
        // printf("array address of 3: %p\n", numbers +1);
        // printf("array address of 5: %p\n", numbers +2);

        // return 0;
// }
// myPROJECTR git:(main) ✗ clang main.c -o main
// ➜  myPROJECTR git:(main) ✗ ./main
         // 5
# include <stdio.h>
int main(){
        int numbers[5] = {1, 3, 5, 7,9};
        for (int i = 0; i < 5;++i){
                printf("%d = %p\n", numbers[i], numbers + i);
        }
        return 0;
}