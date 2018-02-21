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
struct p{
    int al;
    int au;
    int bl;
    int bu;
};
double expVal(int l, int u){
    double res = 0;
    int s = u - l + 1; 
    for(int i = l; i <= u; i++){
        res += i; 
    }
    return res/s;
}
void bestProb(p e, p g){
    double em, gu;
    em = expVal(e.al, e.au) + expVal(e.bl, e.bu);
    gu = expVal(g.al, g.au) + expVal(g.bl, g.bu);
    if(em > gu) cout << "Emma" << endl; 
    else if(em < gu) cout << "Gunnar" << endl; 
    else cout << "Tie" << endl; 
}
int main(){
    p e;
    p g;
    g.al = RI; g.au = RI; g.bl = RI; g.bu = RI;
    e.al = RI; e.au = RI; e.bl = RI; e.bu = RI;
    bestProb(e, g);
    return 0;
}
