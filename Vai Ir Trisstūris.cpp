#include <iostream>
#include<string>
using namespace std;
bool vaiirtrissturis(int a, int b, int c)
{
    if((a+b)>c&&(c+b)>a&&(a+c)>b)
    {
        return true;
    }else{
        return false;
    }
}
int main()
{
cout<<boolalpha<<vaiirtrissturis(2, 2, 2);
}
