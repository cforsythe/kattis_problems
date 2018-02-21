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

const vector<int> DR = {1, 1, 0};
const vector<int> DC = {0, 1, 1};


int main(){
    int x = RI; int y = RI;
    vector<string> parking;
    hmap<int, int> spots;
    for(int i = 0; i < x; i++){
        string s = RS;
        parking.push_back(s);
    } 
    for(int i = 0; i < x - 1; i++){
        for(int j = 0; j < y - 1; j++){
            int count = 0;
            bool finished = true;
            if(parking[i][j] != '#'){
                if(parking[i][j] == 'X') count++; 
                for(int z = 0; z < DR.size(); z++){
                    int r = i + DR[z];
                    int c = j + DC[z];
                    char ch = parking[r][c];
                    if(ch == '#'){
                        finished = false;
                        break;
                    }
                    else if(ch == 'X'){
                        count++;
                    }
                }
                if(finished == true){
                    spots[count] += 1;
                }
            }
        }
    }
    for(int i = 0; i < 5; i++){
        cout << spots[i] << endl;
    }
}
