#include <iostream>
using namespace std;

int main() {
    int one =1;
    int two =1;
    int three;
    int rows;

    cout << "Enter number of fib: ";
    cin >> rows;
   cout<<"0\n"<<one<<endl<<two<<endl;
   
    for(int i=1;i<=(rows-3);i++){
     three =(one+two);
     one =(two);
     two=(three);
     cout<<(three)<<endl;
    }
    return 0;
}