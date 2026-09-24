#include <iostream>
using namespace std;
void incrementBy10(int &num)
{
    num += 10;
}
int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int *nptr = &n;
    // incrementBy10(nptr);
    cout << n << endl;

    cout << -17 % 10 << endl;

    cout << 2 * 10 << endl

        /*
        class Solution {
      public:
        int closestNumber(int n, int m) {
            // bool flag = false;
            // if(n<0 || m<0) flag = true;
            // n= abs(n);
            // m = abs(m);
            // // code here
            // int r = n%m;
            // int q = n/m;

            // // if(n>0){
            //     if(r>=m/2){
            //         if(flag==false) return m*(q+1);
            //         else return -1*(m*(q+1));
            //     }
            //     else{
            //         // cout<<"I am dealing with negative number";
            //         if(flag==false)return m*q;

            //         else return -1*m*q;
            //     }
            // // }
            // // else{
            // //     if(abs(r) >=m/2) return m*(q+1);
            // //     else return m*q;
            // // }

            cout<<n<



        }
    };*/

        return 0;
}