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
#define EUCMOD(a, b)  (a < 0 ? (((a % b) + b) % b) : (a % b))
char letterShift(char a, char b){
    int n = b - 'A';
    return 'A' + EUCMOD((a - 'A' - n),26);  
}
int main(){
    string cipher = RS;
    string key = RS;
    string res = "";
    for(int i = 0; i < cipher.size(); i++){
        res += letterShift(cipher[i], key[i]);
        key += res[i]; 
    }    
    cout << res << endl;
}
