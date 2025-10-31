using namespace std;
#include <iostream>
#include <vector>

int main()
{
    int summa;
    int x;
    int y;
vector<int> skaitlis = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 23, 423 ,12, 32, 65, 32, 16, 18, 19};
cout<<"Ievadiet meklējamo summu:";
cin>>summa;
for(int i = 0;i<skaitlis.size();i++){
    x = skaitlis[i];
   for(int o = i+1;o<skaitlis.size();o++){
       y = skaitlis[o];
       if(x+y==summa){
           cout<<x<<" "<<y<<endl;
           break;
       }
       
   }
   
}
   return 0;
    
}

