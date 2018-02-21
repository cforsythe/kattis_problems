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


bool ordered(vector<string> words, vector<char> ordering){
  map<char, int> l;
	if(words.empty() || ordering.empty()){
return true;
}
  for(int i = 0; i < ordering.size(); i++){
    l[ordering[i]] = i;
  }
  for(int i = 0; i < words.size() - 1; i++){
    for(int j = 0; j < words[0].size(); j++){
      if(l[words[i][j]] > l[words[i + 1][j]]){
        return false;
      }
      else if(l[words[i][j]] < l[words[i + 1][j]]){
        break;
      }
      
    }
  }
  return true;
}

int main(){
    vector<string> words = {};
    vector<char> ordering = {'c', 'b', 'a'};
	cout << ordered(words, ordering) << endl;    

}
