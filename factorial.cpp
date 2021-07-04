#include <iostream>

using namespace std;

void factorial(int num)
{

    int answer = 1;
    int init = num;

    // factorial using while loop
    while (num > 0)
    {
        answer *= num;
        num--;
    }

    // factorial using for loop

    for (num; num > 0; num--)
    {
        answer *= num;
    }

    cout << "Factorial of " << init << " is " << answer << endl;
}

int main()
{

    int num;
    cout << "Enter number: "; cin >> num;
    factorial(num);

    return 0;
}
