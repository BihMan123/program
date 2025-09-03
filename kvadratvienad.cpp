#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a =0;
    float b =0;
    float c =0;
    cout << "Ieraksti skaitli a:\n";
    cin >> a;
     cout << "Ieraksti skaitli b:\n";
     cin >> b;
      cout << "Ieraksti skaitli c:\n";
      cin >> c;
    float x1 = ((b*-1+sqrt(b*b-(4*a*c)))/(2*a));
    float x2 = ((b*-1-sqrt(b*b-(4*a*c)))/(2*a));
    cout << "1. x sakne ir:";
    cout << x1;
    cout <<"\n";
    cout<<"2. x sakne ir:";
    cout<<x2;
}