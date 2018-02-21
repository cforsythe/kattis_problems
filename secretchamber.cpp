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
bool hasPair(char s, char d, hmap<char, string> &l,hset<char> &used){
    if(s == d){
        return true;
    }
    if(used.count(s) > 0){
        return false;
    }
    if(l.count(s) < 1){
        return false;
    }
    string p = l[s];
    used.insert(s);
    for(int i = 0; i < p.length(); i++){
       if(hasPair(p[i], d, l, used)){
           return true;
       }
    } 
    return false;
}
bool canDecrypt(string f, string s, hmap<char, string> &l){
    if(f.length() != s.length()) return false;
    for(int i = 0; i < f.length(); i++){
        hset<char> used;
        if(!hasPair(f[i],s[i], l, used)){
            return false;
        }
    }
    return true;
} 

int main(){
    int x=RI, y=RI;
    hmap<char, string> l;
    for(int i = 0; i < x; i++){
        char c = RC; char s = RC;
        l[c] += s; 
    }
    for(int i = 0; i < y; i++){
        string first = RS; string second = RS;
        if(canDecrypt(first, second, l)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}
