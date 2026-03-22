#include<bits/stdc++.h>
using namespace std;
class solution 
{
    int mySqrt(int x)
    {
        int i=1;
        if(x==0)
        {
            return 0;
        }
        while(i<=x/i)
        {
            i++;
        }
        return i-1;

        }

    }
