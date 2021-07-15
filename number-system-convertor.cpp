#include <iostream>
#include <cmath>
using namespace std;


int convert(int num, int from, int to)
{
    int r, i=0;
    int octNum =0;
    while (num !=0){
        r = num % to;
        octNum = (octNum + r * pow(from, i));
        i++;
        num/=to;
    }
    return octNum;
}
string decToHex(int decimalNumber)
{
    int r;
    string hexNum = "";   
    char hexchars[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}; 
    while (decimalNumber > 0){
        r = decimalNumber % 16;
        hexNum = hexchars[r] + hexNum;
        decimalNumber/=16;
    }
    return hexNum;
}

int binToOct(int binaryNumber)
{
    int bin_dec = convert(binaryNumber, 2, 10);
    return convert(bin_dec, 10, 8);
}

string binToHex(int binaryNumber)
{
    int bin_dec = convert(binaryNumber, 2, 10);
    return decToHex(bin_dec);
}

void fromBinary() 
{
    int binaryNumber;
    cout << "Enter Binary Number: ";
    cin >> binaryNumber;
    // Output calculateed figures
    cout << "Decimal: " << convert(binaryNumber, 2, 10) << endl;
    cout << "Octal: " << binToOct(binaryNumber) << endl;
    cout << "Hexadecimal: " << binToHex(binaryNumber) << endl;
}
int main()
{
    
    fromBinary();
    return 0;
}
