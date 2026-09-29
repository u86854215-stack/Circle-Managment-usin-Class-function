#include <iostream>
using namespace std;
class Circle {
public:
float radius;
float x;
float y;
Circle(){
x = 0;
y = 0;
radius = 0;}
Circle(float a,float b,float r){
x = a;
y = b;
if (r >= 0)
radius = r;
else
radius = 0;}
void setValues(float a, float  b,float r){
x = a;
y = b;
if (r >= 0){
radius = r;}
else{
cout << "Radius cannot -ve set to 0" << endl;
radius = 0;}}
float area(){
float result = 3.14 * radius * radius;
 return result;}
float circum(){
float result = 2 * 3.14 * radius;
return result;}
void print(){
cout << "Center x = " << x << endl;
cout << "Center y = " << y << endl;
cout << "Radius = " << radius << endl;} };
int main(){
float x1, y1, r1;
float x2, y2, r2;
cout << "Enter Circle 1 values x y radius: ";
cin >> x1 >> y1 >> r1;
Circle c1;
c1.setValues(x1, y1, r1);
cout << "Enter Circle 2 values x y radius: ";
cin >> x2 >> y2 >> r2;
Circle c2(x2, y2, r2);
cout << "Circle 1:" << endl;
c1.print();
cout << "Area = " << c1.area() << endl;
cout << "Circumference = " << c1.circum() << endl;
cout << "Circle 2:" << endl;
c2.print();
cout << "Area = " << c2.area() << endl;
cout << "Circumference = " << c2.circum() << endl;
cout << endl;
float x3,y3,r3;
cout << "Update...enter new values of Circle 1: ";
cin >> x3 >> y3 >> r3;
c1.setValues(x3 , y3 , r3);
cout << "Updated Circle 1:" << endl;
c1.print();
cout << "Area = " << c1.area() << endl;
cout << "Circumference = " << c1.circum() << endl;
return 0;}
