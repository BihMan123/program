#include <iostream>
#include <string>
using namespace std;
float aritmetiskaOperacija(float a, float b, string c)
{
float d = 0;
if( c == "summa")
{
d = a+b;
}else if( c =="atnemsana")
{
d = a-b;
}else if(c == "reizinasana")
{
d = a*b;
}else if(c == "dalisana")
{
d = a/b;
}
return d;
}

int main()
{
    float a;
    float b;
    string c;
cout <<"Ievadiet 2 skaitlus:";
cin >> a;
cin >> b;
cout << "Ievadiet operaciju(summa, atnemsana, reizinasana, dalisnana):";
cin >> c;
cout << aritmetiskaOperacija(a, b, c);
}
