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
struct interval{
    int s;
    int e;
};



int main(){
    int arr[3]; 
    arr[0] = RI, arr[1] = RI, arr[2] = RI;
    vector<interval> time;
    int max = 0;
    for(int i = 0; i < 3; i++){
        int s = RI; int e = RI;
        if(e > max) max = e;
        interval temp;
        temp.s = s;
        temp.e = e;
        time.push_back(temp);
    }
    vector<int> nums(max);
    for(int i = 0; i < 3; i++){
        for(int j = time[i].s - 1; j < time[i].e - 1; j++){
            nums[j] += 1;    
        }     
    }
    int res = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0) res += nums[i]*arr[nums[i] - 1];
    }
    cout << res << endl;
}
