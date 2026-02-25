#include <iostream>
#include <vector>
using namespace std;

int searchNearlySorted(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;


        if (arr[mid] == target)
            return mid;

        
        if (mid - 1 >= low && arr[mid - 1] == target)
            return mid - 1;

        if (mid + 1 <= high && arr[mid + 1] == target)
            return mid + 1;

    
        if (target < arr[mid])
            high = mid - 2;
        else
            low = mid + 2;
    }

    return -1; 
}

int main() {
    vector<int> arr = {20, 10, 40, 30, 50};
    int target = 30;

    int index = searchNearlySorted(arr, target);

    if (index != -1)
        cout << "Found at index: " << index;
    else
        cout << "Not found";
}