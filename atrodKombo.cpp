#include<iostream>
#include<vector>
#include<string>
#include <chrono>
using namespace std;
using namespace std::chrono;
auto start = high_resolution_clock::now();

bool vaipildas(int a, int b, int c)
{
    if(a*a+b==c && a<=b&&b<=c)
    {
        return true;
    }
    return false;
}

struct Trijnieks {
int a, b, c;   
};

int main()
{
    vector<Trijnieks> atrastie;
    int a;
    int b;
    int c;
    int n = 20;
for(int i = 1; i<=n; i++)
    {
    a = i;
    for(int i = a; i<=n; i++)
        {
        b = i;
        c=a*a+b;
        if(c<=n)
            {
            if(vaipildas(a, b, c)==true)
                {
                    
                    atrastie.push_back({a, b, c});
                }
            }
        
        }
    }
    for(int i = 0; i<atrastie.size(); i++)
    {
        cout<<atrastie[i].a<<" "<<atrastie[i].b<<" "<<atrastie[i].c<<endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << duration.count() << endl;
    
}
