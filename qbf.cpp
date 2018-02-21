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
vector<char> ALPHA(27);

string isPana(string s){
    hset<char> l;
    string missing = "";
    bool pana = true;
    for(int i = 0; i < s.size(); i++){
        l.insert(tolower(s[i]));
    }
    for(int i = 0; i < 26; i++){
        if(l.count(ALPHA[i]) < 1){
            pana = false;
            missing += ALPHA[i];
        }
    }
    if(pana) return "pangram";
    return "missing " + missing;
}

int main(){
    char a = 'a';
    for(int i = 0; i < 26; i++){
        ALPHA[i] = a  + i;
    }
    vector<string> p;
    int x = RI;
    cin.ignore();
    for(int i = 0; i < x; i++){
        p.push_back(isPana(RLN));
    } 
    for(auto i: p){
        cout << i << endl;
    }
}
