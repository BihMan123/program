#include <iostream>
#include <vector>
using namespace std;

void saskait(int a){
    int s = 0;
for(int i = 1; i<=a; i++){
    s = s + i;
    if(i == a){
        cout<<i<<" = "<<s;
        break;
    }
    cout<<i<<" + ";
}
}


int sig = 0;
int main() {

cout<<"Ievadiet veselu skaitli:";
cin>>sig;
saskait(sig);
}
