#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool vaipildas(int a, int b, int c)
{
    if(a*a+b==c && a<=b&&b<=c)
    {
        return true;
    }
    return false;
}


int main()
{
    int a;
    int b;
    int c;
    cout<<"nih ievadi 3 skaitlus, c lielaks par b, b lielaks par a\nIevadiet a:";
    cin>>a;
    cout<<"ievadiet b:";
    cin>>b;
    cout<<"ievadiet c:";
    cin>>c;
    if(vaipildas(a, b, c)==true)
    {
        cout<<"derīgs kombo";
    }else
    {
        cout<<"mirsti";
    }
    
}
