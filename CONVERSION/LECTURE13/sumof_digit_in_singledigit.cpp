// sum of digit in single digit
#include<iostream>
using namespace std;

int main()
{
    int num, rem;
    cout << "enter the number:";
    cin >> num;
    while (num > 9)
    {
        int ans = 0;

        while (num > 0)
        {
            rem = num % 10;
            num = num / 10;
            ans = ans + rem;
        }
        num = ans;
    }

    cout << "the sum of digit is:" << num;
    return 0;
}
