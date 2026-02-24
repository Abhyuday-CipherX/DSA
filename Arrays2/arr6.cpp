#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int> arr) {
        int n = arr.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            if(arr[i] > arr[(i+1) % n]) {      // inc. inc. inc. dec. inc. inc .......
                count++;                       
            }
        }

        return count <= 1;
    }
};

int main() {
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array." << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;

    if(sol.check(arr))
        cout << "The array is sorted and rotated." << endl;
    else
        cout << "The array is not sorted and rotated." << endl;

    return 0;
}