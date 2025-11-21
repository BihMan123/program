#include <iostream>
#include <string>
#include<vector>
using namespace std;
vector<int> ftm(int a)
{
    vector<int> b;
    for(int i =1; i<=3;i++)
        {
        b.push_back(a*i);
        }
    return b;
}

int main()
{
    vector<int> a;
    a = ftm(89);
    for(int i = 0;i<a.size();i++)
        {
        cout<<a[i]<<endl;
        }
}
