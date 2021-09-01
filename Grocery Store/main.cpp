// Themanbentil Made it💻🥰
// </I Code>

#include <iostream> 
#include <fstream>
#include <string>  

using namespace std;  

// void print_menu()
// {
//     cout << "Welcome to Bentil's Grocerry store!." << endl;
//     cout << "=========PROGRAM MENU========" << endl;
//     cout << "0 - Quit Progam" << endl;
//     cout << "1 - Add New Product" << endl;
//     cout << "2 - View Products in Store" << endl;
//     cout << "3 - View Product Details" << endl;
//     cout << "=========PROGRAM MENU========" << endl;
// }
// void produc_detail(id)
// {
//     cout << "=========ITEM DETAILS========" << endl;
//     cout << "Product Code: 123"  << endl;
//     cout << "Product name: "<< item_name << endl;
//     cout << "Duration on Shelf: " << duration << endl;
//     cout << "Percentage Increase: 2%" << endl;
//     cout << "Selling price: "<< actual_price + (actual_price * percent_inc)  << endl;
//     cout << "=========ITEM DETAILS========" << endl;
// }
void addProduct(int id, string name, double price)
{
    ofstream file;
    file.open(PATH-TO-FILE); // Creating Files with Username
    //Writing User Data in File
    file << "ID     NAME    PRICE   " << endl;
    file << id << "     " << name << "     " << price << endl;
    file.close();

    cout << "\n\n Product Added successfully!.\n\n";
}
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
    
    addProduct(2, item_name, actual_price);
    
    
    return 0;  
}  
