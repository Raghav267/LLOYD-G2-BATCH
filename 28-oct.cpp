#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = INT_MIN;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        ans = max(ans, sum);
    }
    cout << "Maximum subarray sum is : " << ans;
    return 0;
}

// 1423

// class Solution {
//     public int maxScore(int[] arr, int k) {

//         int total_sum = 0;
//         int n = arr.length;
//         int required_window_size = n - k;
//         int mini = Integer.MAX_VALUE;
//         int cur_window_sum = 0;
//         int left = 0;
//         for(int i : arr)
//         {
//             total_sum += i;
//         }
//         // mini = total_sum;
//         if(n==k)
//         {
//             return total_sum;
//         }
//         for(int i = 0 ; i < required_window_size ;i++)
//         {
//             cur_window_sum+=arr[i];
//         }
//         mini = cur_window_sum;
//         for(int i = required_window_size ; i < n ; i++)
//         {
//             cur_window_sum-=arr[left];
//             cur_window_sum+=arr[i];
//             mini = Math.min(mini,cur_window_sum);
//             left++;
//         }

//         return total_sum - mini;

//     }
// }