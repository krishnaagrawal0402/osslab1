#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string str;
    cin>>str;
    cout << "Original string: " << str << endl;
    reverse(str.begin(), str.end());
    cout << "Reversed string: " << str << endl;
    return 0;
}
