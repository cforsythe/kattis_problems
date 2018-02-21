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
string encrypt(string msg){
    int k = ceil(sqrt(msg.size()));
    int m = k*k;
    for(int i = 0; i < m - msg.size();i++){
        msg+="*";
    }
    string mat[k][k];
    int x=k-1, y=0;
    int i = 0;
    while(x != -1){
        mat[x][y] = msg[i];
        y++;
        if(y > k-1){
            y = 0;
            x--;
        }
        i++;
    }
    string res = "";
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            if(mat[j][i] != "*") res+= mat[j][i];
        }
    }
    return res;
}

int main(){
    int x = RI;
    vector<string> m(x);
    for(int i = 0; i < x; i++){
        m[i] = encrypt(RS);
    }
    for(int i = 0; i < x; i++){
        cout << m[i] << endl;
    }
}
