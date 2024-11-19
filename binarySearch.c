#include <stdio.h>

int binary_search(int A[], int n, int x);

int main() {
    int arr[9] = {1,2,3,4,5,6,7,8,9};

    printf("%d", binary_search(arr, 9, 6));
}

int binary_search(int A[], int n, int x) {
    int left, right, mid;
    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == x) return mid;
        if (A[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}