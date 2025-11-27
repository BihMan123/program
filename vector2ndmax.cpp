#include <iostream>
#include <string>
#include <vector>
using namespace std;
int vector_2ndmax(vector<int> a)
{
int b =a[0];
int c;
for(int j = 0; j<a.size(); j++)
    {
    if(b<a[j])
    c = b;
    b = a[j];
    }
return c;
}
int main()
{
vector<int> a={2,5,8, 44,45};
cout<<vector_2ndmax(a);
}
