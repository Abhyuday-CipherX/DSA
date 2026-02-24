#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    
    int largest(vector<int> &arr) {
        int n = arr.size();
        int max_no = arr[0];
        
        for (int i = 1; i < n; i++) {
            if(arr[i]>max_no)
                max_no = arr[i];
            }
        
        return max_no;
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
    int largest_element = sol.largest(arr);
    cout << "The largest element of the array: " << largest_element << endl;
    
    return 0;
}