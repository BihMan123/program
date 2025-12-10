#include<iostream>
#include<vector>
#include<string>
#include <random>
#include <ctime>
using namespace std;

void vaivienad(vector<vector<int>> a)
{
    for (int i = 0; i < a.size(); i++) {
    bool allZero = true;
    bool allOne  = true;
    bool r_allZero = true;
    bool r_allOne = true;

    for (int j = 0; j < a[i].size(); j++) {
        if (a[i][j] != 0) allZero = false;
        if (a[i][j] != 1) allOne  = false;
    }
        for (int j = 0; j < a[i].size(); j++) {
        if (a[j][i] != 0) r_allZero = false;
        if (a[j][i] != 1) r_allOne  = false;
    }

    if (allZero)
        cout << "Row " << i + 1 << " is all 0\n";
    if (allOne)
        cout << "Row " << i + 1 << " is all 1\n";
    if (r_allZero)
        cout << "column " << i + 1 << " is all 0\n";
    if (r_allOne)
        cout << "column " << i + 1 << " is all 1\n";
        
}
}

int main()
{
    int x = 10;
    
srand(time(0));
vector<vector<int>> a(x, vector<int>(x));

for(int i = 0; i<x;i++ )
{
    for(int j = 0; j<x;j++)
    {
        a[i][j] = rand() % 2;
    }
}

for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a[i].size(); j++) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}

vaivienad(a);

return 0;
}
