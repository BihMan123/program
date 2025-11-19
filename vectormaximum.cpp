#include <iostream>
#include <string>
#include <vector>
using namespace std;
int Vector_max(vector<int> a)
{
int b =a[0];
for(int j = 0; j<a.size(); j++)
    {
    if(b<a[j])
    b = a[j];
    }
return b;
}
