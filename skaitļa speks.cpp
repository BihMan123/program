using namespace std;
#include <iostream>

int main()
{
	int s1;
	int s2;
	int s3;
	int speks = 0;
	cout<<"Ievadiet veselu, naturālu, divciparu skaitli:";
	cin>>s1;
	do{
	    speks = speks+1;
	    s2 = s1/10;
	    s3 = s1%10;
	    s1 = s2*s3;
	   
	    
}while(s1>10);
	cout<<endl<<"Skaitļa spēks ir:"<<speks;
	return 0;
}
