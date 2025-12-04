#include <stdio.h>

void reverseString(char* arr, int size) {
    int left = 0;
    int right = size - 1;
    int k;
    while (left < right) {
        char tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}
int main() {
    int len;
    int j;

    scanf("%d", &len);
    char s[len];
    for (j = 0; j < len; j++) {
        scanf(" %c", &s[j]);
    }
    reverseString(s, len);
    for (j = 0; j < len; j++) {
        printf("%c ", s[j]);
    }
    return 0;
}

