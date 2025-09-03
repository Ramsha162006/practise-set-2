#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void maxSubarray(int arr[], int n) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    int start = 0, end = 0, tempstart = 0;

    for(int i = 0; i < n; i++) {
        if(currentSum <= 0) {
            currentSum = arr[i];
            tempstart = i;
        } else {
            currentSum += arr[i];
        }

        if(currentSum > maxSum) {
            maxSum = currentSum;
            start = tempstart;
            end = i;
        }
    }

    cout << "Maximum subarray sum = " << maxSum << endl;
    cout << "Subarray = [ ";
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxSubarray(arr, n);

    return 0;
}
