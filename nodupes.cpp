#include <iostream>
#include <vector>
using namespace std;

vector<int> nodupe(vector<int> a)
{
    vector<int> dup;
    for (int i = 0; i < a.size(); i++) {
        bool found = false;
        for (int j = 0; j < dup.size(); j++) {
            if (a[i] == dup[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            dup.push_back(a[i]);
        }
    }
    return dup;
}

int main()
{
    vector<int> a = {2,2,2,23,3,4,4,5,56,6,6};
    vector<int> b = nodupe(a);
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << endl;
    }
}
