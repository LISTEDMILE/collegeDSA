#include <iostream>
using namespace std;

int sqrtBinary(int n) {
    int left = 0, right = n, ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid * mid == n)
            return mid;
        else if (mid * mid < n) {
            ans = mid;        // possible answer
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

    return ans;
}

int main() {
    int n = 27;
    cout << "Square root (floor): " << sqrtBinary(n);
}