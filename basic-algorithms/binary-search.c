#include <stdio.h>

int main() {
    int nums[] = {1, 3, 5, 7, 9};
    int target = 7;
    int left = 0, right = 4;
    int result = -1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (nums[mid] == target) {
            result = mid;
            break;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("%d\n", result);

    return 0;
}