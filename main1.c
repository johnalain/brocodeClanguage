# include <stdio.h>
int main(){
        int numbers[5] = {1, 3, 5, 7,9};
        for (int i = 0; i < 5; ++i){
                printf("%d = %p\n", numbers[i], numbers + i);
        }
        return 0;
}
//output:1 = 0x7ff7bfeff3f0
// 3 = 0x7ff7bfeff3f4
// 5 = 0x7ff7bfeff3f8
// 7 = 0x7ff7bfeff3fc
// 9 = 0x7ff7bfeff400
//=======================
// Skip to content
// Chat history



// You said:
// printf("%d = %p\n", numbers[i], numbers + i); 
// whatis this code does
// ChatGPT said:
// Good question — this line is doing two different things
//  at once, and it’s all about arrays + pointers in C.

// printf("%d = %p\n", numbers[i], numbers + i);
// Let’s break it down piece by piece 👇

// 1️⃣ numbers[i]
// This prints the value stored at index i of the array 
// numbers.

// So if:

// int numbers[] = {10, 20, 30};
// numbers[0] → 10
// numbers[1] → 20
// numbers[2] → 30

// %d is correct because it’s an int.
// 2️⃣ numbers + i
// This prints the memory address of the element at index i.
// Key idea:
// An array name (numbers) is basically a pointer to the first element
// Pointer arithmetic applies here
// So:
// numbers + 0 → address of numbers[0]
// numbers + 1 → address of numbers[1]
// numbers + i → address of numbers[i]
// %p is used because this is a pointer (address).
// 3️⃣ What the line outputs
// It prints:
// value = address
// Example program:
// int numbers[] = {10, 20, 30};
// for (int i = 0; i < 3; i++) {
//     printf("%d = %p\n", numbers[i], numbers + i);
// }// Possible output (addresses will differ):
// 10 = 0x7ffee3b4a8c0
// 20 = 0x7ffee3b4a8c4
// 30 = 0x7ffee3b4a8c8
// Notice:
// Addresses increase by 4 bytes (because int is 4 bytes on most systems)
// 4️⃣ Important relationship 🔥
// These two are equivalent:
// numbers[i]   == *(numbers + i)
// &numbers[i]  ==  numbers + i
// So your line is essentially showing:
// “Here is the value, and here is where it lives in memory.”
// If you want, I can also rewrite this line using pointer dereferencing to make it even clearer 👍

// No file chosenNo file chosen
// ChatGPT can make mistakes. Check important info.
