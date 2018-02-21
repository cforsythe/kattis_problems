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

int sub(string f, string s){
    int count = 0; 
    for(int i = 0; i < s.length() - f.length() + 1; i++){
        string ans = s.substr(i, f.length());
        if(s.substr(i, f.length()) == f){ 
            count++;
        }
    } 
    return count;
}

int main(){
    string s = RS;
    while(s != "0"){
        string a = RS;
        cout << sub(s, a) << " ";
        int res = 0;
        hset<string> used;
        for(int i = 0; i < s.size(); i++){
            string z = s;
            z.erase(z.begin() + i);
            if(used.count(z) < 1){
                used.insert(z);
                res += sub(z, a);
            }
        }
        cout << res << " ";
        used.clear();
        vector<char> l = {'A', 'G', 'C', 'T'};
        res = 0;
        for(int i = 0; i < s.size() + 1; i++){
            for(int j = 0; j < l.size(); j++){
                string z = s;
                z.insert(i,1, l[j]);
                if(used.count(z) < 1){
                    used.insert(z);
                    res += sub(z, a);
                }
            }
        }
        cout << res << endl;
        s = RS;
    }

}
