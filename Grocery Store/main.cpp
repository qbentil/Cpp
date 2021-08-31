#include <iostream>  
#include <string>  

using namespace std;  


int main()  
{  
    string item_name;
    int duration, item_code;
    double actual_price, selling_price;
    double percent_inc = 0.05; 
    
    cout << "Welcome to Bentil's Grocerry store!." << endl;
    cout << "Enter product name: "; cin >> item_name;
    cout << "Enter item Price:  "; cin >> actual_price;
    cout << "Enter item duration on shelf(Days): "; cin >> duration;
    
    cout << item_name << " added successfully." << endl;
    
    cout << "=========ITEM DETAILS========" << endl;
    cout << "\nProduct Code: 123"  << endl;
    cout << "Product name: "<< item_name << endl;
    cout << "Duration on Shelf: " << duration << endl;
    cout << "Percentage Increase: 2%" << endl;
    cout << "Selling price: "<< actual_price + (actual_price * percent_inc)  << endl;
    cout << "\n=========ITEM DETAILS========" << endl;
    
    return 0;  
}  