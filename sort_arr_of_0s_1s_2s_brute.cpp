#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Merge both halves
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Remaining elements
    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for(int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void ms(vector<int>& arr, int low, int high) {
    if(low >= high) return; // base case

    int mid = (low + high) / 2;

    ms(arr, low, mid);      // sort left half
    ms(arr, mid + 1, high); // sort right half
    merge(arr, low, mid, high); // merge both halves
}

int main() {
    vector<int> arr = {0,1,2,0,1,2,1,2,0,0,1};

    ms(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for(int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
