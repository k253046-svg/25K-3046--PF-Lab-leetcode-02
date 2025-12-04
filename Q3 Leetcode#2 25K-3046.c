#include <stdio.h>

int removeDuplicates(int* arr, int size) {
    if (size == 0) return 0;
    int write = 1;
    int j;
    for (j = 1; j < size; j++) {
        if (arr[j] != arr[j - 1]) {
            arr[write] = arr[j];
            write++;
        }
    }
    return write;
}

int main() {
    int n;
    int k;
    int i;
    
    scanf("%d", &n);
    int nums[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    k = removeDuplicates(nums, n);

    printf("%d\n", k);
    for (i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}

