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

bool mathPossible(int a, int b, int c){
    if(a + b == c) return true;
    if(a - b == c) return true;
    if(a * b == c) return true;
    if((float)a / (float)b == c) return true;
    if(b - a == c) return true;
    if((float)b / (float)a == c) return true;
    return false;
}

int main(){
    int x = RI;
    for(int i = 0; i < x; i++){
        int a, b, c;
        a = RI;
        b = RI; 
        c = RI;
        if(mathPossible(a, b, c)) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
}
