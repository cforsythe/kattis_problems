#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <queue>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
#define hmap unordered_map
#define hset unordered_set
#define omap map
#define oset set
#define tmap map
#define tset set
#define sp shared_ptr
#define R(x) (([]{ x v; cin >> v; return v; })())
#define RLN (([]{ string l; getline(cin, l); return l; })())
#define RILN stoi(RLN)
#define RC R(char)
#define RI R(int)
#define RL R(long int)
#define RLL R(ll)
#define RULL R(ull)
#define RD R(double)
#define RLD R(ld)
#define RS R(string)
using namespace std;
template <class T> istream& operator>>(istream& is, vector<T>& v) {
  for (auto& x : v) is >> x;
  return is;
}

char rotChar(char c, int rot){
    int l;
    if(c == '_') l = 26;
    else if(c == '.') l = 27;
    else l = c - 'A'; 
    l = (l + rot) % 28;
    if(l == 26) return '_';
    else if(l == 27) return '.';
    else return 'A' + l;
}

string rotate(string s, int rot){
    for(int i = 0; i < s.size(); i++){
        s[i] = rotChar(s[i], rot);
    }
    return s;
}

string reverse(string s){
    for(int i = 0; i < s.size()/2; i++){
        swap(s[i], s[s.size() - 1 - i]);
    }
    return s;
}

string reverseRot(string s, int rot){
    s = reverse(s);
    s = rotate(s, rot);
    return s;
}

int main(){
    int x = RI;
    while(x != 0){
        string s = RS;
        s = reverseRot(s, x);
        cout << s << endl;
        x = RI;
    }
}
