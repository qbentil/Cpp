#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    
    string customer_name, category;
    float quantity, monthly_bill, rural_electrification, subsidy, payable_bill, cost_per_kw;
    string currency = "GHC";
    
    cout << "Customer name: "; getline(cin, customer_name);
    cout << "Quantity of Electricity: "; cin >> quantity;
    

    if (quantity <= 150)
    {
        category = "Domestic";
        cost_per_kw = 1.2;
    }else if(quantity > 350.00)
    {
        category = "Commercial";
        cost_per_kw = 3.5;
    }else{
        category = "Industrial";
        cost_per_kw = 2.3;
    }
    
    
    // Calculating monthly_bill
    monthly_bill = quantity * cost_per_kw;

    // Calculating rural_electrification bill
    rural_electrification = 0.01 * monthly_bill;
    
    // Add rural electrification to monthly_bill
    monthly_bill += rural_electrification;
    
    // Calculating Government 50% Subsidy
    subsidy = 0.5 * monthly_bill;
    
    // Calculating payable_bill 
    payable_bill = monthly_bill - subsidy;
    
    // Displaying Reciept Data.
    cout << "\n===================================" << endl;
    cout << "Customer name: " << customer_name << endl;
    cout << "Quantity of Electricity: "<< quantity << "KW" << endl;
    cout << "Category: "<< category << endl;
    cout << "Rural Electrification Charge: " << currency << fixed << setprecision(2) << rural_electrification << endl;
    cout << "Government Subsidy: " << currency << fixed << setprecision(2) <<subsidy << endl;
    cout << "Payable Amount: " << currency << fixed << setprecision(2) <<payable_bill << endl;
    cout << "===================================" << endl;
    return 0;
}

