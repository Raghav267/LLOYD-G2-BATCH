#include <bits/stdc++.h>
using namespace std;
vector<int> getAverages(vector<int> &nums, int k)
{
    vector<int> ans;

    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        long long sum = 0;
        if (i - k < 0 || i + k >= n)
        {
            ans.push_back(-1);
        }
        else
        {
            for (int j = i - k; j <= i + k; j++)
            {
                sum += nums[j];
            }
            ans.push_back(sum / (2 * k + 1));
        }
    }
    return ans;
}
int main()
{

    //     leetcode number: 643 ; 1343
    //     class Solution {
    // public:
    //     double findMaxAverage(vector<int> &nums, int k) {
    //         // int  l = 0 ;
    //         int r = 0;
    //         double ans = INT_MIN;
    //         double sum = 0;

    //         for(int i = 0 ; i < k ; i++){
    //             sum+= nums[i];
    //         }
    //         // ans= max(ans, sum);
    //         ans = sum;

    //         for(r = k ; r < nums.size() ; r++){

    //             sum+=nums[r];
    //             sum-=nums[r-k];
    //             // l++;

    //             ans = max(ans, sum);
    //         }
    //         return (ans/(k*1.0));
    //     }
    // };
    return 0;
}