#include <iostream>
using namespace std;

void segregateEvenOdd(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left < right) {

        // Move left while even
        while (arr[left] % 2 == 0 && left < right)
            left++;

        // Move right while odd
        while (arr[right] % 2 == 1 && left < right)
            right--;

        // Swap odd at left with even at right
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {12, 17, 70, 15, 22, 65, 21, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    segregateEvenOdd(arr, n);

    cout << "Array after segregation:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}