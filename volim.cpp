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

int main(){
    int start = RI;
    int answers = RI;
    int time = 210;
    for(int i = 0; i < answers; i++){
        int time_taken = RI;
        int action = RC;
        if(time_taken >= time){
            cout << endl;
            break;
        }
        if(action == 'N' || action == 'P'){
            time -= time_taken;
        }
        else{
            time -= time_taken;
            start = (start) % 8 + 1;
        }
    }
    cout << start << endl;
}
