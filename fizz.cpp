#include <iostream>
using namespace std;
int main()
{{
int s1 = 1;
for(int i=1;i<101; i++)
   {
       cout<<s1<<endl;
       s1++;
       if(s1%5==0 && s1%3==0){
           cout<<"Fizzbuzz";
           
       }else if(s1%3==0){
           
           cout<<"Fizz";
       }else if(s1%5==0){
           
               cout<<"Buzz";
           }else if(s1==67){
               
               cout<<"😛";
           }
       }
   }
   
   
   
   

    return 0;
}
