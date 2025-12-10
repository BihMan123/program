#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main()
{
    int x;
    int y;
    int n;
    cin>>n;
   vector<vector<int>> a(n, vector<int>(n));
   for(int i = 0; i<n; i++)
   {
       for(int j = 0; j<n; j++ )
       {
           a[i][j] = (i + 1)*(j + 1);
       }
   }
   
for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a[i].size(); j++) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}
cin>>x;
cin>>y;
cout<<a[x-1][y-1];
}
