#include <iostream>
#include<string>
#include<vector>
using namespace std;
vector<vector<int>> pizdec(int a)
{
    vector<vector<int>> sig;
for(int i = 1;i<=a;i++)
    {
    for(int j = i;j<=a;j++)
        {
            for(int y = j;y<=a;y++)
            {
            if(i+j+y==a&&j-i==y-j)
            {
            sig.push_back({i,j,y});
            }
            }
        }
    }
return sig;
}
int main()
{
    vector<vector<int>> v = pizdec(18);
for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
        cout << v[i][j] << " ";
    }
    cout << "\n";
}
}
