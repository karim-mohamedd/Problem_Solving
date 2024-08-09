#include <stdio.h>

int findMax(int* nums, int numsSize){
    if (numsSize == 0) {
        
        return -1; 
    }
    
    int max = nums[0]; 
    
    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] > max) {
            max = nums[i]; 
        }
    }
    
    return max; 
}

int main() {
    int nums[] = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int max = findMax(nums, numsSize);
    
    printf("The maximum number in the array is: %d\n", max);
    
    return 0;
}
