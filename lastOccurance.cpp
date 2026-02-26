#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            ans = mid;        // store answer
            left = mid + 1;   // move right
        }
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 4, 5, 7};
    int target = 4;

    cout << "Last occurrence index: "
         << lastOccurrence(arr, target);
}