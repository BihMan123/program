#include <iostream>
#include <string>
#include<vector>
using namespace std;
bool is_palindrome(string text)
{
int n = text.length();
for(int i=0;i<n; i++)
{
    if(text[i] != text[n - 1 - i])
    {
    return false;
    }
}

return true;
}
int main()
{
cout<<boolalpha<<is_palindrome("tuff");
}
