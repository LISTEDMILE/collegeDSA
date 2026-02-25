#include <iostream>
using namespace std;

int peakElement(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] < arr[mid + 1])
            low = mid + 1;   // Peak is on right
        else
            high = mid;      // Peak is on left or mid
    }
   
    return low;  // Index of peak element
}

int main()
{
    int arr[] = {1, 3, 5, 7, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = peakElement(arr, n);

    cout << "Peak element is: " << arr[peakIndex] << endl;
    cout << "Peak index is: " << peakIndex << endl;

    return 0;
}