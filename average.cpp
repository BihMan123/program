#include <iostream>
#include <string>
//funkcijas
using namespace std;
float average(float a, float b)
{
return (a+b)/2;
}
//main
int main()
{
float a;
float b;
cout <<"Ievadiet 2 skaitlus:";
cin >> a;
cin >> b;
cout<<average(a, b);
}
