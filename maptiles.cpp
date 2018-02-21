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


void getXY(string num, int x, int y){
    for(int i = 1; i < num.size(); i++){ 
        int n = num[i] - '0';
        if(n == 0){
            x *= 2;
            y *= 2;
        }
        if(n == 1){
            x = 2*x+1;
            y *= 2;
        }
        if(n == 2){
            x *= 2;
            y = 2*y + 1;
        }
        if(n == 3){
            x = 2*x + 1;
            y = 2*y + 1;
        }
    }
    cout << x << " " << y << endl;
    return;
}
void getXY(string num){
    ull x, y;
    int f = num[0] - '0';
    if(f == 0){
        x = 0;
        y = 0;
    }
    if(f == 1){
        x = 1;
        y = 0;
    }
    if(f == 2){
        x = 0;
        y = 1;
    }
    if(f == 3){
        x = 1;
        y = 1;
    }
    getXY(num,x, y);
}
int main(){
    string x = RS;
    cout << x.size() << " "; 
    getXY(x);
}
