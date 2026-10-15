//
// Created by yangboyu on 2026/10/14.
//
#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.1415926; //const 变量可以放在main函数之外

int main() {
    double r,girth,area;
    cout << "Please input radius:\n";
    cin >> r;
    girth = 2 * PI * r;
    area = PI * pow(r, 2);
    cout <<"radius = "<< r << endl;
    cout <<"girth = "<< girth << endl;
    cout <<"area = "<< area << endl;
    return 0;
}