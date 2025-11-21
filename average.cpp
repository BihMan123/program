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

//average vector
#include <iostream>
#include <string>
#include <vector>
using namespace std;
float average(vector<float> a){
{
    float b = 0;
    for(int i = 0;i<a.size();i++)
    {
        b = b+a[i];
    }
return b/a.size();
}
}
int main()
{
vector<float> sigma = {10 , 3, 5,6, 53};
cout<<average(sigma);

}
