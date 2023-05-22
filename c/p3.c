#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    unsigned long num = 600851475143;
    unsigned long largestPrimeDivisor = 0;

    // square root of num is 775,146
    for (unsigned long i = 2; i < 775146; i++){

        // if i is a divisor (prime or not) of num
        if (num % i == 0){
            bool isPrime = true;
            // determine if i is a prime number
            for (unsigned long j = 2; j < i/2; j++){
                if (i % j == 0){
                    isPrime = false;
                    break;
                }
            }

            if (isPrime){
                largestPrimeDivisor = i;
            }
        }

    }

    printf("Largest Prime Divisor: %lu\n", largestPrimeDivisor);
    return 0;
}