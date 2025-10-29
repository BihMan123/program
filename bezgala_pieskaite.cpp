using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int gals = 0;
    int t = 0;
    int sk;
vector<int> skaitlis;

do{
    cout<<"Ievadiet veselu skaitli:";
    cin>>sk;
    cout<<endl;
    skaitlis.push_back(sk);
    do{
    cout<<"Vēlaties turpināt? 0-Ja  1-ne ievadiet:";
    cin>>t;
    if(t!=1 && t!=0){
        cout<<"\n ievadiet normālu opciju, lamzak\n";
    }
    gals = gals+sk;    
    }while(t!=0 && t!=1);
}while(t==0);
for(int i = 0;i<=skaitlis.size()-1; i++){
    cout<<skaitlis[i]<<endl;
}
cout<<"\ngala summa ir:"<<gals;
    return 0; 
}
