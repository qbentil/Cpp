/******************************************************************************

Welcome to qBentil CPP Repo.
This Repo Calculates the factorial of a given number using the recursion method
Thembentil made it.
Code with bentil twitter @themanbentil

*******************************************************************************/
#include <iostream>
using namespace std;

int factorial(int num)
{
    if(num == 1)
    {
        return 1;
    }else{
        return factorial(num - 1)*num;
    }
}

int main()
{
    int num;                        
    cin >> num;
    cout << factorial(num);
}

