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


int main(){
    int sweet = RI;
    int sour = RI;
    bool gone = false;
    while(!(sweet == 0 && sour == 0)){
        else if(sweet + sour == 13){
            gone = true;
            cout << "Never speak again." << endl;
        }
        else if(sweet < sour){
            cout << "Left beehind." << endl;
        }
        else if(sweet > sour){
            cout << "To the convention." << endl;
        }
        else cout << "Undecided." << endl;
    sweet = RI;
    sour = RI;
        
    }
}
