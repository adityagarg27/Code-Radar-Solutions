// #include <stdio.h>
// int isPrime(int num){
//     if(num <= 1) return 0;
//     for(int i = 2;i * i<=num;i++){
//         if(num % i == 0) return 0;
//     }     
//     return 1;
// }

// int main(){
//     int t;
//     scanf("%d", &t);
//     while(t--){
//         int num;
//         scanf("%d", &num);
//         printf("%d\n", isPrime(num));
//     }
//     return 0;
// }

// #include <stdio.h>

// int isPrime(int num) {
    // if (num <= 1) return 0; // 0 and 1 are NOT prime
    // if (num == 2) return 1; // 2 is the ONLY even prime number
    // if (num % 2 == 0) return 0; // Exclude other even numbers

    // Check divisibility from 3 to sqrt(num), skipping even numbers
    // for (int i = 3; i * i <= num; i += 2) { 
        // if (num % i == 0) return 0; // If divisible, not prime
    // }
    // return 1; // If no divisors found, it's prime
// }

// int main() {
//     int t;
//     scanf("%d", &t); // Input number of test cases

//     while (t--) {
//         int num;
//         scanf("%d", &num);
//         printf("%d\n", isPrime(num)); // Print 1 if prime, 0 otherwise
//     }
//     return 0;
// }
// #include <stdio.h>

// // Function to check if a number is prime
// int isPrime(int num) {
//     if (num <= 1) return 0; // 0 and 1 are NOT prime
//     if (num == 2) return 1; // 2 is the ONLY even prime number
//     if (num % 2 == 0) return 0; // Exclude other even numbers

//     int i; // Declare variable before loop (for C90 compatibility)
//     for (i = 3; i * i <= num; i += 2) { // Check only odd numbers
//         if (num % i == 0) return 0; // If divisible, not prime
//     }
//     return 1; // If no divisors found, it's prime
// }

// int main() {
//     int t;
    
//     // Ensure valid input for test cases
//     if (scanf("%d", &t) != 1) return 1; 

//     while (t--) { // Loop for multiple test cases
//         int num;
//         while (getchar() != '\n'); // Clear input buffer if needed
//         scanf("%d", &num);
//         printf("%d\n", isPrime(num)); // Print 1 if prime, 0 otherwise
//     }

//     return 0; // Explicit return statement
// }























#include <stdio.h>

int isPrime(int num){
    if(num <= 1)return 0;
    for(int i = 2; i * i <=num;i++){
        if(num % i == 0)return 0;
        
    }
    return 1;
}



