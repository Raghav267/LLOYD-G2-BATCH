#include <iostream>
using namespace std;
void incrementBy10(int &num)
{
    num += 10;
    cout << "The value of num inside the function is: " << num << endl;
}

// double areaOfRectangle(double length, double breadth)
// {
//     return length * breadth;
// }

// int factorial(int n)
// {
//     if (n <= 1)
//         return 1;
//     int ans = 1;

//     for (int i = 2; i <= n; i++)
//     {
//         ans *= i;
//     }
//     cout << "The value of ans is: " << ans << endl;
//     return ans;
// }

// void printYourName(int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << "Ankit ";
// }

int main()
{

    // int n;
    // cin >> n;

    // bool isPrime = true;

    // for (int i = 2; i * i <= n; i++)
    // {

    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime == true)
    //     cout << "Prime";

    // else
    //     cout << "Not Prime";
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // // I am writing this code here
    // printYourName(n);
    // cout << endl;

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int returnValue = factorial(n);
    // cout << "The factorial of " << n << " is: " << returnValue << endl;
    // cout << "The area of rectangle is: " << areaOfRectangle(10.50, 20.60) << endl;

    int n;
    cin >> n;
    incrementBy10(n);
    cout << "The value of n inside the main function is: " << n << endl;
    return 0;
}