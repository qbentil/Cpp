// Themanbentil made it💖

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

void fromDecimal() 
{
    int decimalNumber;
    cout << "Enter Decimal Number: ";
    cin >> decimalNumber;
    // Output calculateed figures
    cout << "Binary: " << convert(decimalNumber, 10, 2) << endl;
    cout << "Octal: " << convert(decimalNumber, 10, 8) << endl;
    cout << "Hexadecimal: " << decToHex(decimalNumber) << endl;
}

void menu()
{
    cout << "Program menu: " << endl;
    cout << "0 - To Quit" << endl;
    cout << "1 - Convert from Decimal" << endl;
    cout << "2 - Convert from Binary" << endl;
    cout << "3 - Program menu: " << endl;
}
int main()
{
    
    bool quit = false;
    int opt;
    
    // print menu
    menu();
    while (!quit)
    {
        cout << "Enter option: ";
        cin >> opt;
        switch (opt){
            case 0:
                cout <<"Quiting program.......";
                quit = true;
                break;
            case 1:
                fromDecimal();
                break;
            case 2:
                fromBinary();
                break;
            case 3:
                menu();
                break;
            default:
                cout <<"Action not found!";
                break;
        }
    }
    return 0;
}
