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

struct pt{
    int i;
    int j;
};

const vector<int> DR = {-1, 0, 1, 0, -1, 1, -1, 1};
const vector<int> DC = {0, -1, 0, 1, -1, 1, 1, -1};

void findEach(vector<string> &dish){
    vector<pt> d;
    int count = 0;
    for(int i = 0; i < dish.size(); i++){
        for(int j = 0; j < dish[0].size(); j++){
            if(dish[i][j] == '#'){
                pt curr;
                curr.i = i;
                curr.j = j;
                d.push_back(curr);
                while(!d.empty()){
                    curr = d.back();
                    d.pop_back();
                    dish[curr.i][curr.j] = '.';
                    for(int x = 0; x < DR.size(); x++){
                        int r = curr.i - DR[x];
                        int c = curr.j - DC[x];
                        if(r >= 0 && r < dish.size() && c >= 0 && c < dish[0].size() && dish[r][c] == '#'){
                            pt temp;
                            temp.i = r;
                            temp.j = c;
                            d.push_back(temp);
                        } 
                    }
                }
                count++;
            }
        }
    }
    cout << count << endl;
}


int main(){
    vector<string> dish;
    int y, x;
    y = RI;
    x = RI;
    cin.ignore();
    for(int i = 0; i < y; i++){
        string line = RLN;
        dish.push_back(line);
    } 
    findEach(dish);
    return 0;
}
