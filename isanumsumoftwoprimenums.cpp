#include <iostream>
using namespace std;
int num, num1, num2, sum, i, j, k;

int isPrime(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (num % i == 0)
        {
            return 0;
        }
        else
        {
            return isPrime(num, i - 1);
        }
    }
}

int main()
{
    cout << "Enter the positive integer : " << endl;
    cin >> sum;
    if (sum < 4)
    {
        cout << "A number less than 4 can not be the sum of two prime numbers." << endl;
        cout << "Please enter a number that is >= 4" << endl;
    }
    else
    {
        for (num1 = 2; num1 <= sum / 2; num1++)
        {
            num2 = sum - num1;

            j = isPrime(num1, num1 / 2);
            k = isPrime(num2, num2 / 2);

            if (j == 1 && k == 1)
            {
                cout << sum << " = " << num1 << " + " << num2 << endl;
            }
        }
    }
}
