#include <stdio.h>

// Function to count set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;        
    }
    return count;
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int result = countSetBits(num);
    
    printf("The number of set bits is %d\n", result);

    return 0;
}
