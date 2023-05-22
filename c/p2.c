#include <stdio.h>

int main(){
    int sum = 0;
    int current = 1;
    int beforePrevious, previous = 0;

    while (current <= 4000000){
        
        if (current % 2 == 0) {
            sum += current;
        }
        
        beforePrevious = previous;
        previous = current;
        current = (previous + beforePrevious);
    }
    printf("Sum: %d\n", sum);
}