#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    s.replace(s.begin(), s.end(), "\s+", " ");
    cout << s << endl; 
    return 0;
}
