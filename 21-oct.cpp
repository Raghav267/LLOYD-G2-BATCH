#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // vector<int> nums = {1, 2, 3, 4, 5};
    // cout << "Size of nums: " << nums.size() << endl;
    // nums.pop_back();
    // cout << "Size of nums after pop_back: " << nums.size() << endl;
    int size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Size of nums: " << nums.size() << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}