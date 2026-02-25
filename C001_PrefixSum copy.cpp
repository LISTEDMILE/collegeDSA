#include <iostream>

#include <vector>
using namespace std;

int PrifixSum(vector<int> arr, int f, int s){

    return arr[s] - arr[f-1];
}

int main(){

    int si;
    cout << "Enter no. of elements : ";
    cin >> si;
    vector<int> arr(si);
    int s, e;

    for (int i = 0; i < si; i++)
    {
        cout << "Element " << i << " : ";
        cin >> arr[i];
    }


    for (int i = 1; i < si; i++){
        arr[i] = arr[i] + arr[i - 1];
    }



    for(int val : arr){
        cout << val << " ";
    }

    cout << "\nEnter starting index : ";
    cin >> s;

     cout << "\nEnter ending index : ";
    cin >> e;

    cout << PrifixSum(arr, s, e);

    return 0;
}