#include <iostream>
#include <math.h>

using namespace std;

int main (){
    double r, area, pi;
    std:: cout << "Enter Radious of Circle: " ;
    std:: cin >> r;
    pi = acos(-1);
    area = pi * r * r;
    std:: cout << "Area of Circle is: " << area << std:: endl;
    return 0;
}