#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;

    print(n - 1);
    cout << n << " ";
}

// void print(string str, int idx)
// {

//     if (idx == str.length())
//         return;

//     cout << str[idx] << " ";
//     print(str, ++idx);
// }

void print(string str){
     
}
int main()
{

    // print(10);
    // return 0;
    string str = "HELLOWORLD";

    print(str);
}