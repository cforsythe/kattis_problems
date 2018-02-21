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
    int x = RI;
    vector<int> t(x);
    for(int i = 0; i < x; i++){
        t[i] = RI;
    }
    sort(t.begin(), t.end(), greater<int>());
    int longest = t[0] + 1;
    int days = longest;
    for(int i = 0;i < x; i++){
       if(t[i] + 1 > days){
            int diff = t[i] + 1  - days;
            longest += diff;
            days+= diff;
       }
       days--;
    }
    cout << longest + 1 << endl;
}
