#include <iostream>
#include <math.h>
#include <iomanip>      // std::setprecision


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
double get_perimeter(int num_of_sides, double length){
    return num_of_sides * length;
}



// (1/4)na2 cot(π/n) = nr2 tan(π/n)
double get_area(int number_of_sides, double length)
{
    return (0.25 * number_of_sides * length * length * (1/tan(M_PI / number_of_sides)));
}

double get_exterior_angle(int n){
    return 360 / n;
}
double get_interior_angle(int n){
    double num = (n-2) / static_cast<float>(n);
    return num*180;
}
int main()
{
    int type, number_of_sides, operation;
    double length, perimeter, area, exterior_angle, interior_angle;
    string name;
    string polygons[11] = {"Triangle", "Quadrilateral", "Pentagon", "Hexagon", "Septagon", "Octagon", "Nonagon", "Decagon", "Undecagon", "Dodecagon", "Tridecagon"};
    
    cout << "WELCOME TO POLYGON PERIMETER OPERATOR: \n"<< endl;
    
    cout << "Select Polygon: " << endl;
    cout << "\t0 - Triangle \n\t1 - Quadrilateral \n\t2 - Pentagon \n\t3 - Hexagon \n\t4 - Septagon \n\t5 - Octagon \n\t6 - Nonagon \n\t7 - Decagon \n\t8 - Undecagon \n\t9 - Dodecagon \n\t10 - Tridecagon" << endl;
    cout << ">> (0 - 9): "; cin>> type;
    cout << "Enter length of 1 side (cm): "; cin>> length;
    
    number_of_sides = detect_polygon(type);
    name = polygons[type];
    
    // call qty functions
    perimeter = get_perimeter(number_of_sides, length);
    area = get_area(number_of_sides, length);
    exterior_angle = get_exterior_angle(number_of_sides);
    interior_angle = get_interior_angle(number_of_sides);
    
    
    cout << "PERIMETER CALCULATOR: \n"<< endl;
    cout << "Name: " << name << endl; 
    cout << "Number of sides: " << number_of_sides << endl; 
    cout << "Side Length: " << length << "cm" <<  endl; 
    cout << "Perimeter: " << perimeter << "cm" << endl; 
    cout << "Area: " << area << " square cm" << endl; 
    cout << "Exterior Angle: " << exterior_angle << " degrees" << endl; 
    cout << "Interior Angle: " << interior_angle << " degrees" << endl; 
    
    // TODO: IN-RADIUS AND CIRCUM-RADIUS
    return 0;
}
