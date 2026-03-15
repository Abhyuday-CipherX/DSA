// using list 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // list <vector <int>> l;
    // l.push_back({1,2,3});
    // l.push_back({4,5,6});
    // cout<<"The elements int the list are: "<<endl;
    // for(auto it:l)
    // {
    //     for(auto it1:it)
    //     {
    //         cout<<it1<<" ";
    //     }
    // }
    // return 0;
    // list <list <int>> l;
    // l.push_back({1,2,3,4,5,6});
    // l.push_back({7,8,9,10,11,12});
    // cout<<"The elements int the list are: "<<endl;
    // for(auto it:l)
    // {
    //     for(auto it1:it)
    //     {
    //         cout<<it1<<" ";
    //     }
    // }
    // return 0;
    // list <int> l;
    // l.push_back(1);
    // l.push_back(2);
    // l.push_back(3);
    // l.push_back(4);
    // l.push_back(5);
    // l.reverse();
    // cout<<"The elements int the list are: "<<endl;
    // for(auto it:l)
    // {
    //     cout<<it<<" ";
    // }
    //     return 0;
    list <int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.insert(next(l.begin(), 2), 10);
    cout<<"The elements int the list are: "<<endl;
    
    for(auto it:l)
    {
        cout<<it<<" ";
    }
        return 0;
}