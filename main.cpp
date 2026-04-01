#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base;
    double area;

    cout << "Geometry Calculator\n";
    cout << "\t1. Calculate the Area of Circle\n";
    cout << "\t2. Calculate the Area of Rectangle\n";
    cout << "\t3. Calculate the Area of Triangle\n";
    cout << "\t4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // TODO
switch(choice){
    case 1:cout << "give radius for circle" << endl;
        cin >> radius >> endl;
        area = (3.14159) * (radius * radius)
    cout << left << setprecision(2) << fixed;
    cout << "The area is" << area << endl;
    break;
    case 2:

    case 3:

    case 4:

    return 0;
}
