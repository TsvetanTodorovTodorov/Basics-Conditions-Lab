#include <iostream>
#include <cmath>
using namespace std;

    // calculate the area of the geomethrical figure;

int main()
{
   string figure;
   cin >> figure;
   double area;

   if (figure == "square")
   {
    double a;
    cin >> a;
    area = a * a;
   } else if (figure == "rectangle")
   {
    double a;
    cin >> a;
    double b;
    cin >> b;
    area = a * b;
   } else if (figure == "circle")
   {
    double r;
    cin >> r;
    area = M_PI * r * r;
   } else if (figure == "triangle")
   {
    double a;
    cin >> a;
    double h;
    cin >> h;
    area = a * h / 2;
   } 
   
   cout.setf(ios::fixed);
   cout.precision(3);

   cout << area << endl;

    return 0;
}