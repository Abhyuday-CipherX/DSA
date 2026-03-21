#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    string multiply(string num1, string num2)
    {
        int n=num1.size();
        int m=num2.size();
        if (num1 == "0" || num2 == "0")
            return "0";

        vector<int> res(n + m, 0);

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {

                int mul = (num1[i]) * (num2[j]);

                int sum = mul + res[i + j + 1];

                res[i + j + 1] = sum % 10;
                res[i + j] += sum / 10;
            }
        }

        
        string result = "";
        for (int i = 0; i < res.size(); i++)
        {
            if (result.size() == 0 && res[i] == 0)
                continue;
            result += to_string(res[i]);
        }
        return result;
    }
};