using namespace std;
#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
    srand(time(0));
    int ran;
	int s1;
	int lim1 = 100;
	int lim2 = 1;
	int choice;
	cout<<"Ievadiet veselu, naturālu skaitli no 1-100:";
	do{
	cin>>s1;
	if(s1<1||s1>100)
	{
	    cout<<"\nievadi normālu skaitli, kropli\n";
	}
}while(s1<1||s1>100);
do{
    ran = rand() % (lim1 - lim2 + 1) + lim2;
    cout<<"Es minu, ka jūsu skaitlis ir:"<<ran<<" Vai man ir taisnība, ievadiet atbildi, jūsu skaitlis ir:\nZemāks-1\nLielāks-2\nVienāds-3\n";
    do{
        cin>>choice;
    }while(choice != 1 && choice !=2 && choice != 3);
    if(choice == 1)
    {
        lim1 = ran - 1;
    }else if(choice ==2)
    {
        lim2 = ran + 1;
    }else if(choice == 3)
    {
        cout<<"Labais";
        break;
    }    
}while(s1!=0);
return 0;
}
