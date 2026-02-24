#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1;

        int largest = -1;
        int secondLargest = -1;

        for (int i = 0; i < n; i++) {
            
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            }
         
            else if (arr[i] < largest && arr[i] > secondLargest) {
                secondLargest = arr[i];
            }
        }

        return secondLargest;
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
    int second_largest_element = sol.getSecondLargest(arr);
    if (second_largest_element != -1) {
        cout << "The second largest element of the array: " << second_largest_element << endl;
    } else {
        cout << "There is no second largest element in the array." << endl;
    }
    
    return 0;
}
