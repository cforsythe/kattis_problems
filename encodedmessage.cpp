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

void decode(string m){
    int size = ceil(sqrt(m.size()));
    char matrix[size][size];
    int z = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            matrix[i][j] = m[z]; 
            z++;
        }
    }
    int j = size - 1;
    int i = 0;
    z = 0;
    while(z < m.size()){
        cout << matrix[i][j];
        i++;
        if(i > size - 1){
            j--;
            i = 0;
        }
        z++;
    }
    cout << endl;
}

int main(){
    int x = RI;
    for(int i = 0; i < x; i++){
        string message = RS;
        decode(message);
    }    
}
