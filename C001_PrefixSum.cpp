#include <iostream>

#include <vector>
using namespace std;

int main(){

    vector<int> arr = {2, 3, 4, 5};


    for (int i = 1; i < arr.size(); i++){
        arr[i] = arr[i] + arr[i - 1];
    }

    for(int val : arr){
        cout << val << " ";
    }

        return 0;
}