#include <iostream>
using namespace std;
int detect_polygon(int type){
    int num;
    for(int i = 0; i <= 10; i++){
        if(i == type){
            num = i+3;
        }
    }
    
    return num;
}
int main()
{
    int type, number_of_sides;
    double length, perimeter;
    string name;
    string polygons[11] = {"Triangle", "Quadrilateral", "Pentagon", "Hexagon", "Septagon", "Octagon", "Nonagon", "Decagon", "Undecagon", "Dodecagon", "Tridecagon"};
    cout << "WELCOME TO POLYGON PERIMETER CALCULATOR: \n"<< endl;
    
    cout << "Select Polygon: " << endl;
    cout << "\t0 - Triangle \n\t1 - Quadrilateral \n\t2 - Pentagon \n\t3 - Hexagon \n\t4 - Septagon \n\t5 - Octagon \n\t6 - Nonagon \n\t7 - Decagon \n\t8 - Undecagon \n\t9 - Dodecagon \n\t10 - Tridecagon" << endl;
    cout << ">> (0 - 9): "; cin>> type;
    cout << "Enter length of 1 side (cm): "; cin>> length;
    
    number_of_sides = detect_polygon(type);
    name = polygons[type];
    perimeter = number_of_sides * length;
    
    
    cout << "PERIMETER CALCULATOR: \n"<< endl;
    cout << "Name: " << name << endl; 
    cout << "Number of sides: " << number_of_sides << endl; 
    cout << "Length of 1 side: " << length << "cm" <<  endl; 
    cout << "Perimeter: " << perimeter << "cm" << endl; 
    return 0;
}
