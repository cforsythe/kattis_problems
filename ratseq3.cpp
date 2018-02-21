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

struct frac{
    int n;
    int d; 
};

frac ratSeq(int num){
    if(num == 1){
        frac f;
        f.n = 1; f.d = 1;
        return f;
    }
    if(num % 2 != 0){
        frac f = ratSeq((num - 1)/2);
        f.n += f.d;
        return f; 
    }
    else{
        frac f = ratSeq(num/2);
        f.d += f.n;
        return f;
    }
 }

int main(){
    int x = RI;
    for(int i = 0; i < x; i++){
        int t = RI;
        int num = RI;
        cout << t << " ";
        frac ans = ratSeq(num);
        cout << ans.n << "/" << ans.d << endl;
    }
}
