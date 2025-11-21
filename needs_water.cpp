#include <iostream>
#include <string>
#include<vector>
using namespace std;
string needs_water(int days, bool is_succulent)
{
    string a = "Don't water the plant!";
    string b = "Time to water the plant!";
    string c = "go ahead and give the plant a little water.";
    string d = "can't help you bruzz";
if(!is_succulent && days>3){
    return b;
    }else if(is_succulent &&days<=12)
    {return a;
    }else if(is_succulent &&days>12)
    {return c;
    }else;
    {
    return a;
    }
}
int main()
{
    int days = 0;
    bool suc;
    cout<<"How many days has it been?:";
    cin>>days;
    cout<<"\nIs the plant a succulent(0=no, 1=yes):";
    cin>>suc;
    
cout<<needs_water(days, suc);
}
