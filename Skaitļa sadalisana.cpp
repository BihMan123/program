#include <iostream>
#include<string>
#include<vector>
using namespace std;
void eirokaudzes(int a)
{
for(int i = 1;i<=a/2;i++)
    {
        for(int j = 1;j<=a;j++)
        {
            if(i+j==a)
            {
                cout<<"("<<i<<", "<<j<<")";
                break;
            }
        }
    }


}
int main()
{
eirokaudzes(18);
}
