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

int getHours(string s){
    return stoi(s.substr(0, s.find(":")));
}
int getMinutes(string s){
    return stoi(s.substr(s.find(":") + 1));
}

int main(){
    while(!cin.eof()){
        string month, day, year, start, end;
        cin >> month >> day >> year >> start >> end;
        if(month == "")
            break;
        int hours = getHours(end) - getHours(start);
        int minutes;
        int b, a;
        b = getMinutes(end); a = getMinutes(start);
        if(b - a < 0){
            hours--;
            minutes = 60 + b-a;
        } 
        else minutes = b-a;
        cout << month << " " << day << " "  << year << " " << hours << " hours " << minutes << " minutes" << endl;
        }
    return 0;
}
