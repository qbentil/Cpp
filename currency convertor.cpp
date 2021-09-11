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
void from_usd(double amount, int to)
{
    if(to == 1){
        cout << "Converting from USD to Cedi: " << endl;
        cout << "Cedi: " << (amount * 5.97) << endl;
    }else if(to == 2){
        cout << "Converting from USD to USD: " << endl;
        cout << "USD: " << amount << endl;
    }else if(to == 3){
        cout << "Converting from USD to Euro: " << endl;
        cout << "Euro: " << (amount * 0.85) << endl;
    }else if(to == 4){
        cout << "Converting from USD to Yuan: " << endl;
        cout << "Yuan: " << (amount * 6.46) << endl;
    }else if(to == 5){
        cout << "Converting from USD to Rand: " << endl;
        cout << "Rand: " << (amount * 14.21) << endl;
    }else if(to == 6){
        cout << "Converting from USD to Pound: " << endl;
        cout << "Pound: " << (amount * 0.72) << endl;
    }
    else{
        cout << "Invalid Exchange Format";
    }
}
void from_euro(double amount, int to)
{
    if(to == 1){
        cout << "Converting from Euro to Cedi: " << endl;
        cout << "Cedi: " << (amount * 7.06) << endl;
    }else if(to == 2){
        cout << "Converting from Euro to USD: " << endl;
        cout << "USD: " << (amount * 1.18) << endl;
    }else if(to == 3){
        cout << "Converting from Euro to Euro: " << endl;
        cout << "Euro: " << amount << endl;
    }else if(to == 4){
        cout << "Converting from Euro to Yuan: " << endl;
        cout << "Yuan: " << (amount * 7.63) << endl;
    }else if(to == 5){
        cout << "Converting from Euro to Rand: " << endl;
        cout << "Rand: " << (amount * 16.80) << endl;
    }else if(to == 6){
        cout << "Converting from Euro to Pound: " << endl;
        cout << "Pound: " << (amount * 0.85) << endl;
    }
    else{
        cout << "Invalid Exchange Format";
    }
}
void from_yuan(double amount, int to)
{
    if(to == 1){
        cout << "Converting from Yuan to Cedi: " << endl;
        cout << "Cedi: " << (amount * 0.93) << endl;
    }else if(to == 2){
        cout << "Converting from Yuan to USD: " << endl;
        cout << "USD: " << (amount * 0.15) << endl;
    }else if(to == 3){
        cout << "Converting from Yuan to Euro: " << endl;
        cout << "Euro: " << (amount * 0.13) << endl;
    }else if(to == 4){
        cout << "Converting from Yuan to Yuan: " << endl;
        cout << "Yuan: " << amount << endl;
    }else if(to == 5){
        cout << "Converting from Yuan to Rand: " << endl;
        cout << "Rand: " << (amount * 2.20) << endl;
    }else if(to == 6){
        cout << "Converting from Yuan to Pound: " << endl;
        cout << "Pound: " << (amount * 0.11) << endl;
    }
    else{
        cout << "Invalid Exchange Format";
    }
}
void from_rand(double amount, int to)
{
    if(to == 1){
        cout << "Converting from Rand to Cedi: " << endl;
        cout << "Cedi: " << (amount * 0.42) << endl;
    }else if(to == 2){
        cout << "Converting from Rand to USD: " << endl;
        cout << "USD: " << (amount * 0.070) << endl;
    }else if(to == 3){
        cout << "Converting from Rand to Euro: " << endl;
        cout << "Euro: " << (amount * 0.060) << endl;
    }else if(to == 4){
        cout << "Converting from Rand to Yuan: " << endl;
        cout << "Yuan: " << (amount * 0.45) << endl;
    }else if(to == 5){
        cout << "Converting from Rand to Rand: " << endl;
        cout << "Rand: " << (amount) << endl;
    }else if(to == 6){
        cout << "Converting from Rand to Pound: " << endl;
        cout << "Pound: " << (amount * 0.051) << endl;
    }
    else{
        cout << "Invalid Exchange Format";
    }
}
void from_pound(double amount, int to)
{
    if(to == 1){
        cout << "Converting from Pound to Cedi: " << endl;
        cout << "Cedi: " << (amount * 8.26) << endl;
    }else if(to == 2){
        cout << "Converting from Pound to USD: " << endl;
        cout << "USD: " << (amount * 1.38) << endl;
    }else if(to == 3){
        cout << "Converting from Pound to Euro: " << endl;
        cout << "Euro: " << (amount * 1.17) << endl;
    }else if(to == 4){
        cout << "Converting from Pound to Yuan: " << endl;
        cout << "Yuan: " << (amount * 8.93) << endl;
    }else if(to == 5){
        cout << "Converting from Pound to Rand: " << endl;
        cout << "Rand: " << (amount * 19.66) << endl;
    }else if(to == 6){
        cout << "Converting from Pound to Pound: " << endl;
        cout << "Pound: " << (amount) << endl;
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


    cout << "\n=========SYSTEM INFORMATION=============" << endl;
    
    cout << "Name: " << name << endl;
    cout << "Phone number: " << phone << endl;
    cout << "National Card Number: " << nationalID_number << endl;
    cout << "Amount: " << amount << endl;
    if(currency == 1){
        from_cedi(amount, exchange_format);
    }else if(currency == 2){
        from_usd(amount, exchange_format);
    }else if(currency == 3){
        from_euro(amount, exchange_format);
    }else if(currency == 4){
        from_yuan(amount, exchange_format);
    }else if(currency == 5){
        from_rand(amount, exchange_format);
    }else if(currency == 6){
        from_pound(amount, exchange_format);
    }else{
        cout << "todo";
    }

    cout << "=========/SYSTEM INFORMATION=============" << endl;

    return 0;
}
