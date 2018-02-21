
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
    vector<int> val;
    while(true){
        for(int i = 0; i < 3; i++){
            int a = RI;
            val.push_back(a);
        }
        if(val[0] == 0 && val[1] == 0 && val[2] == 0) break;
        sort(val.begin(), val.end());
        if(val[0] * val[0] + val[1] * val[1] == val[2] * val[2]) cout << "right" << endl;
        else cout << "wrong" << endl;
        val.clear();
    }
    return 0;
}
