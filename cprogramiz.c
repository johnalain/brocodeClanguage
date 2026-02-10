// # include <stdio.h>
// int main(){
//         char str[] = "programize";
//         printf("%s\n", str);
//         return 0;
// }

// # include <stdio.h>
// int main(){
//         int arr[2][3] = {{1, 3, 5}, {2, 5, 6}};// store element in a 2 dimentional array 3 elements each
//         printf("%d\n", arr[0][1]);// output:3 accessing array elements by index
//         printf("%d\n", arr[1][2]);// output: 6 [1] represent the second array and 2 the last element

//         return 0;
// }

// # include <stdio.h>
// int main(){
//         int arr[2][3] = {{1, 3, 5}, {2, 5, 6}};// store element in a 2 dimentional array 3 elements each
//         arr[0][2] = 7;
//         arr[1][1] = 9;
//         //change element in array
//         printf("%d\n", arr[0][2]);//output : 7
//         printf("%d\n", arr[1][1]);//output : 9
//         // printf("%d", arr);

//         return 0;}

# include <stdio.h>
int main(){
        int arr[2][3] = {{1, 3, 5}, {2, 5, 6}};// store element in a 2 dimentional array 3 elements each
        // using for loop to display elements of multi dimentional array
        for (int i = 0; i < 2; ++i){
                for (int j = 0; j < 3; ++j){
                        printf("%d ", arr[i][j]);
                }
                printf("\n");//output:
                // 1 3 5
                // 2 5 6
        }

                return 0;}