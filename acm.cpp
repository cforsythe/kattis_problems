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
    int time_taken = RI;
    int score = 0;
    int problems_solved = 0;
    hset<string> solved;
    tmap<string, int> problems;
    while(time_taken != -1){
        string problem = RS;
        string status = RS;
        if(status == "right" && solved.count(problem) < 1){
            solved.insert(problem);
            problems[problem] += time_taken;
            problems_solved += 1;
        } 
        else if(solved.count(problem) < 1){
            problems[problem] += 20;
        }
        else{
            continue;
        }
        time_taken = RI;
    }
    for(auto f: solved){
        score += problems[f];
    }
    cout << problems_solved << " " << score << endl;
    }

