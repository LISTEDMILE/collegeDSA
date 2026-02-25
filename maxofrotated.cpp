#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;

    // If not rotated
    if (arr[low] <= arr[high])
        return arr[high];

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is maximum
        if (mid < high && arr[mid] > arr[mid + 1])
            return arr[mid];

        if (mid > low && arr[mid] < arr[mid - 1])
            return arr[mid - 1];

        // Decide which half to search
        if (arr[mid] >= arr[low])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // Should not happen
}

int main() {
    vector<int> arr = {4,5,6,7,1,2,3};
    cout << findMax(arr);
}