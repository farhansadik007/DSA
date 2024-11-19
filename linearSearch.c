#include <stdio.h>

int linear_search(int A[], int n, int x);

int main() {
    int arr[8] = {1,2,3,6,7,8,12,13};

    printf("%d", linear_search(arr, 8, 5));
    //returns the index number if found
    //otherwise returns -1 if a number isn't found

}

// A[] is the array
// n is the total elements of array
// x is the number to search
int linear_search(int A[], int n, int x) {
    int i;

    for(i = 0; i < n; i++) {
        if(A[i] == x) {
            return i;
        }
    }

    return -1;
}


//time complexity = O(n)
//space complexity = O(1)