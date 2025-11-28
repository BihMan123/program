#include <iostream>
#include<string>
using namespace std;
void eirokaudzes(int a)
{
for(int i = 1;i<=a/3;i++)
    {
        for(int j = 1;j<=a;j++)
        {
            for(int y = 1; y<=a;y++)
            {
                if(i+j+y==a&&i<=j&&j<=y)
                {
                    cout<<"("<<i<<", "<<j<<", "<<y<<")";
                    break;
                }
            }
        }
    }

}
int main()
{
eirokaudzes(14);
}
