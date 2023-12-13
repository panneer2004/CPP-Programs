// Online C compiler to run C program online
//V=πr2h
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    double v=0, pi=3.14, r=0, h=0;
    
    cout << "enter r value : ";
    cin >> r;
    
    cout << "enter h value : ";
    cin >> h;
    
    v = pi*(r*r)*h;
    
    cout << "answer is : " << v;
    
    return 0;
}
