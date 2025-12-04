#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {
    int pos = 0;
    int i;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[pos++] = nums[i];
        }
    }
    while (pos < numsSize) {
        nums[pos++] = 0;
    }
}
int main() {
    int n;
    int i;
    scanf("%d", &n);
    int nums[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    moveZeroes(nums, n);
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}

