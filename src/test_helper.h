/**
 * Includes
 */
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <iomanip>
#include <set>
#include <unordered_map>

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

/**
 * Macros
 */
#define rep(i,n) for(int i=0,i##_len=(n);i<i##_len;++i)
#define repx(i,s,e,d) for(int i=s,i##_end=(e);i<i##_end;i+=d)
#define repxr(i,s,e,d) for(int i=s,i##_end=(e);i>i##_end;i+=d)
#define rept(n) for(int ___i___=0,i##_len=(n);___i___<i##_len;++___i___)
#define repi(itr, ds) for (auto itr = ds.begin(); itr != ds.end(); itr++)
#define ALL(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define ZERO(a) memset(a,0,sizeof(a))
#define BIT(n) (1LL<<(n))
#define UNIQUE(v) v.erase(unique(v.begin(),v.end()),v.end());
#define CEIL(x, y) (((x) + ((x) > 0 ? (y) - 1 : -((y) - 1))) / (y))
#define DIST2(x1, y1, x2, y2) (((x1) - (x2)) * ((x1) - (x2)) + ((y1) - (y2)) * ((y1) - (y2)))

/**
 * Standard input helpers
 */
// vector:input
template <typename T>
istream &operator>>(istream &is, vector<T> &vec) {
    for (T &x : vec) is >> x;
    return is;
}
// pair:output
template <typename T, typename U>
ostream &operator<<(ostream &os, pair<T, U> &pair_var) {
    os << "(" << pair_var.first << ", " << pair_var.second << ")";
    return os;
}
// vector:output
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &vec) {
    os << "{";
    for (int i = 0; i < vec.size(); i++) {
        os << vec[i] << (i + 1 == vec.size() ? "" : ", ");
    }
    os << "}";
    return os;
}
// map:output
template <typename T, typename U>
ostream &operator<<(ostream &os, map<T, U> &map_var) {
    os << "{";
    repi(itr, map_var) {
        os << *itr;
        itr++;
        if (itr != map_var.end()) os << ", ";
        itr--;
    }
    os << "}";
    return os;
}
// set:output
template <typename T>
ostream &operator<<(ostream &os, set<T> &set_var) {
    os << "{";
    repi(itr, set_var) {
        os << *itr;
        itr++;
        if (itr != set_var.end()) os << ", ";
        itr--;
    }
    os << "}";
    return os;
}
/**
 * Debug tools
 */
#define DUMPOUT cout
void dump_func() {
    DUMPOUT << endl;
}
template <class Head, class... Tail>
void dump_func(Head &&head, Tail &&... tail) {
    DUMPOUT << head;
    if (sizeof...(Tail) > 0) {
        DUMPOUT << ", ";
    }
    dump_func(std::move(tail)...);
}
#ifdef LOCAL_
#define dump(...)                                                              \
    DUMPOUT << "  " << string(#__VA_ARGS__) << ": "                            \
            << "[" << to_string(__LINE__) << ":" << __FUNCTION__ << "]"        \
            << endl                                                            \
            << "    ",                                                         \
        dump_func(__VA_ARGS__)
#else
#define dump(...)
#endif

/**
 * Helpers
 */
using lli = long long int;
using ii = pair<int, int>;
using ld = long double;
template<typename T>
using heapq = priority_queue<T, vector<T>, greater<T> >; // implement <
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int exdx[8]={1, 1, 1, 0, 0, -1, -1, -1};
int exdy[8]={1, 0, -1, 1, -1, 1, 0, -1};
struct aaa{
    aaa(){
        cin.tie(0); ios::sync_with_stdio(0); cout<<fixed<<setprecision(20);
    };
}aaaaaaa;
/**
 * Libraries
 */
// (paste function or Libraries from ContestLibrary)
/**
 * If necessary
 */
// #define int long long int
// #define INF (1e9 + 1)
/**
 * Solver
 */
// signed main() {
//     return 0;
// }