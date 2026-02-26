#include <iostream>
#include <vector>
using namespace std;

int searchAlmostSorted(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check mid
        if (arr[mid] == target)
            return mid;

        // Check mid - 1
        if (mid - 1 >= left && arr[mid - 1] == target)
            return mid - 1;

        // Check mid + 1
        if (mid + 1 <= right && arr[mid + 1] == target)
            return mid + 1;

        // Move search space
        if (target < arr[mid])
            right = mid - 2;
        else
            left = mid + 2;
    }

    return -1;  // Not found
}

int main() {
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    int target = 40;

    int index = searchAlmostSorted(arr, target);

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";
}