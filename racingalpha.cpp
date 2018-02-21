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
int loc(char c){
    if(c == ' ') return 26;
    if(c == '\'') return 27;
    return c - 'A';
}
int distanceBetween(char a, char b){
    int start = loc(a), dest = loc(b);
    int dist = abs(start - dest);
    if(dist > 14) return 28 - dist;
    return dist;
}
double getTime(string s){
    double time = 1;
    for(int i = 0; i < s.size() - 1; i++){
        int distance = distanceBetween(s[i], s[i+1]);
        time += 1 + ((2 * M_PI * 30/28) * distance)/15; 
    }
    return time;
}
int main(){
    int x = RI;
    vector<string> s(x);
    cin.ignore();
    for(int i = 0; i < x; i++){
        s[i] = RLN;
    }
    for(int i = 0; i < x; i++){
        cout << fixed << setprecision(6) << getTime(s[i]) << endl;
    }
}
