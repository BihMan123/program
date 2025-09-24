#include <iostream>
using namespace std;

int main() {
int s1;
int s2;
int s3;
    cout<<"ievadi skaitli fool:";
    cin>>s1;
    cout<<"\n";

do{
    s2=(s1/10);
    s1=s2;
    s3++;
        }while(s1 !=0);
        
    cout<<s3;

return 0;
}