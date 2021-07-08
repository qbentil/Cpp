#include <iostream>

using namespace std;

bool isPalindrome(int n){
    int reversed = 0, lastDigit, num = n;
    while (num !=0){
        lastDigit = num % 10;
        reversed = reversed * 10 + lastDigit;
        num/=10;
    }
    if(n == reversed){
        return true;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter the number: "; cin >> n;
    if(isPalindrome(n)){
        cout << n << " is a palindrome number" << endl;
    }else
    {
        cout << n << " is not a palindrome number" << endl;
    }

    return 0;
}

