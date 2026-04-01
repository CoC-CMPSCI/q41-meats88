#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159265358979;
    int choice;
    double width, height, radius, base, length;
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
        cin >> radius;
        area = (3.14159) * (radius * radius);
    cout << left << setprecision(2) << fixed;
    cout << "The area is" << area << endl;
    break;
    case 2: cout << "give length and width for rectangle" << endl;
    cin >> length >> width;
    area = length * width;
     cout << left << setprecision(2) << fixed;
    cout << "the area is:" << area << endl;
    break;

    case 3:cout << "give base and height fro triangle" << endl;
    cin >> base >> height;
    
        area = base * height * 0.5;
    cout << " the area is:" << area << endl;
    break;
    
    case 4: cout << "Program Stopped" << endl;
        break;
    default:  cout << "Program Stopped" << endl;
    break;
}
    return 0;
}
