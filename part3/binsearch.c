#include <stdio.h>
#include <stdlib.h>

#define TGT 556
#define MAX 1000

int binsearch(int x, int v[], int n) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int main() {
    int arr[MAX];
    int i;
    for (i = 0; i < MAX; i++)
        arr[i] = i;
    int res = binsearch(TGT, arr, MAX);
    if (res == -1)
        printf("Not found %d in arr.\n", TGT);
    else
        printf("Found %d in arr, the index is %d.\n", TGT, res);
    return 0;
}
