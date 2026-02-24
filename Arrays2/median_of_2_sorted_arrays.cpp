#include<bits/stdc++.h>
using namespace std;
class solution
{
    public: 
    double findMedianSortedArrays(vector<int> &nums1,vector<int> &nums2)
    {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> merge(n1+n2);
        int i=0,j=0,k=0;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j])
            {
                merge[k++]=nums1[i++];
            }
            else
            {
                merge[k++]=nums2[j++];
            }
        }
        while(i<n1)
        {
            merge[k++]=nums1[i++];
        }
        while(j<n2)
        {
            merge[k++]=nums2[j++];
        }
        int total=n1+n2;
        if(total%2==0)
        {
            return (merge[total/2-1]+merge[total/2])/2.0;
        }
        else
        {
            return merge[total/2];
        }
    }
};
int main()
{
    int n1,n2;
    cout<<"Enter the size of first array: "<<endl;
    cin>>n1;
    vector<int> nums1(n1);
    cout<<"Enter the elements of first array: "<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>nums1[i];
    }
    cout<<"Enter the size of second array: "<<endl;
    cin>>n2;
    vector<int> nums2(n2);
    cout<<"Enter the elements of second array: "<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>nums2[i];
    }
    solution sol;
    double median=sol.findMedianSortedArrays(nums1,nums2);
    cout<<"The median of the two sorted arrays is: "<<median<<endl;
    return 0;
}