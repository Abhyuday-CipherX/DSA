#include <bits/stdc++.h>
using namespace std;
class solution {
    public:
    void rotate(vector<int>& arr, int k)
    {
        int n = arr.size();
        k = k % n; 
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
    }
};
int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array." << endl;
    for (int i = 0; i < n; i++)
     {
        cin >> arr[i];
    }
    int k;
    cout << "Enter the number of positions to rotate the array: " << endl;
    cin >> k;
    
    solution sol;
    sol.rotate(arr, k);
    
    cout << "The rotated array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}