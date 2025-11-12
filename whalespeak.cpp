#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string a = "Slime out your day ones";
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
vector<char> result ={};
    for (int i = 0; i < a.size(); i++) {
        for (int e=0; e <vowels.size(); e++){
            if(a[i] == vowels[e]){
            result.push_back(vowels[e]);
         }
        }
            if(a[i]=='e'){
                result.push_back('e');
            }
            if(a[i]=='u'){
                result.push_back('u');
            }
        }
    
for(int i=-0; i<result.size();i++){
    cout<<result[i];
    }
    cout << endl;
    return 0;
}
