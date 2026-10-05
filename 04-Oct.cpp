#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int n;
    // cout << "Enter a  Binary number: ";
    // cin >> n;

    // if (n > 10 or cout << "This is condition of if block" << endl)
    // {
    //     cout << "We are in if block" << endl;
    // }
    // else
    // {
    //     cout << "We are in else block" << endl;
    // }

    // first method

    // int ans = 0;
    // int mult = 1;
    // int temp = n;
    // while (n > 0)
    // {
    //     int last_digit = n % 10;
    //     ans = ans + last_digit * mult;
    //     mult = mult * 2;
    //     n = n / 10;
    // }
    // cout << "Decimal equivalent: " << ans << endl;

    // // second method

    // int ans1 = 0;
    // int powCount = 0;
    // n = temp;
    // while (n > 0)
    // {
    //     int last_digit = n % 10;
    //     ans1 = ans1 + last_digit * pow(2, powCount);
    //     powCount++;
    //     n = n / 10;
    // }
    // cout << "Decimal equivalent (method 2): " << ans1 << endl;

    int n;
    cout << "Enter a decimal Number System number: ";
    cin >> n;

    int ans = 0;

    while (n != 0)
    {
        int rem = n % 2;
        ans = rem * 10 + ans;
        n = n / 2;
    }
    cout << "Binary equivalent: " << ans << endl;
    return 0;
}