//In progress............................

#include <iostream>
#include <string>

using namespace std;

void from_cedi(double amount, int to)
{
    if(to == 1){
        cout << "Converting from Cedi to Cedi: " << endl;
        cout << "Cedi: " << amount << endl;
    }else if(to == 2){
        cout << "Converting from Cedi to USD: " << endl;
        cout << "USD: " << (amount * 0.17) << endl;
    }else if(to == 3){
        cout << "Converting from Cedi to Euro: " << endl;
        cout << "Euro: " << (amount * 0.14) << endl;
    }else if(to == 4){
        cout << "Converting from Cedi to Yuan: " << endl;
        cout << "Yuan: " << (amount * 1.07) << endl;
    }else if(to == 5){
        cout << "Converting from Cedi to Rand: " << endl;
        cout << "Rand: " << (amount * 2.36) << endl;
    }else if(to == 6){
        cout << "Converting from Cedi to Pound: " << endl;
        cout << "Pound: " << (amount * 0.12) << endl;
    }
    else{
        cout << "Invalid Exchange Format";
    }
}

int main()
{

    // number 2
    string name, nationalID_number, phone;
    int currency, exchange_format;
    double amount;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your Phone number: ";
    cin >>  phone;

    cout << "Enter your National ID number: ";
    cin >>  nationalID_number;

    cout << "Select your currency: " << endl;
    cout << "\t1-Cedi \n\t2-USD \n\t3-Euro \n\t4-Yuan \n\t5-Rand \n\t6-Pound " << endl;
    cout << ">> ";
    cin >> currency;

    cout << "Select your Exchange Format: " << endl;
    cout << "\t1-to Cedi \n\t2-to USD \n\t3-to Euro \n\t4-to Yuan \n\t5-to Rand \n\t6-to Pound " << endl;
    cout << ">> ";
    cin >> exchange_format;

    cout << "Enter Amount: ";
    cin >>  amount;


    cout << "\n=========USER INFORMATION=============" << endl;
    
    cout << "Name: " << name << endl;
    cout << "Phone number: " << phone << endl;
    cout << "National Card Number: " << nationalID_number << endl;
    cout << "Amount: " << amount << endl;
    if(currency == 1){
        from_cedi(amount, exchange_format);
    }else{
        cout << "todo";
    }

    cout << "=========/USER INFORMATION=============" << endl;

    return 0;
}
