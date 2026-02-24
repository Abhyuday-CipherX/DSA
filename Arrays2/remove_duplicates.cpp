#include<bits/stdc++.h>
using namespace std;
class solution {
    public:
    int removeDuplicates(vector<int>& nums)
    {
        int n = nums.size();
        if (n == 0) 
        return 0; 

        int j = 0; 

        for (int i = 1; i < n; i++) {
            if (nums[i] != nums[j])
             {
                j++; 
                nums[j] = nums[i]; 
            }
        }

        return j + 1; 
        

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
    solution sol;
    int new_length = sol.removeDuplicates(arr);
    
    cout << "The new length of the array after removing duplicates: " << new_length << endl;
    cout << "The elements of the array after removing duplicates: ";
    for (int i = 0; i < new_length; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}