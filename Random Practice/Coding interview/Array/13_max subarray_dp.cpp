#include <iostream>
using namespace std;

int maxSumArr(int arr[], int arrSize)
{
    if (arrSize < 1) {
        return 0;
    }

    int currMax = arr[0];
    int globalMax = arr[0];

    for (int i = 1; i < arrSize; i++) {
        if (currMax < 0) {
            currMax = arr[i];
        }
        else {
            currMax += arr[i];
        }

        if (globalMax < currMax) {
            globalMax = currMax;
        }
    }
    return globalMax;
}

int main()
{
    int arr[] = { -4, 2, -5, 1, 2, 3, 6, -5, 1 };
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSumArr(arr, arrSize);
    cout << "Maximum contiguous sum is " << maxSum;
    return 0;
}
