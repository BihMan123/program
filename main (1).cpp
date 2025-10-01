using namespace std;
#include <iostream>

int main()
{
	int s1;
	cout<<"Ievadiet veselu, naturālu skaitli:";
	cin>>s1;
	int s2 =2;
	do {
		if(s1 % s2 == 0)
		{
			cout<<"NAV PIRMSKAITLIS!";
			return 0;
		}
		s2++;
	} while(s2<s1);
	cout<<"PIRMSKAITLIS!";
	return 0;
}