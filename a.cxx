#include <bits/stdc++.h>
using namespace std;

// Loops
#define FOR(n)              for(int i=0;i<n;i++)
#define FORJ(n)             for(int j=0;j<n;j++)
#define FORN(n,x)           for(int x=0;i<n;i++)
#define RFOR(n)             for(int i=n-1;i>=0;i--)
#define RFORN(n,x)          for(int x=n-1;x>=0;x--)
#define ODD_FOR(n)          for(int i=1;i<n;i+=2)
#define EVEN_FOR(n)         for(int i=2;i<n;i+=2)
#define FROM(n,m)           for(int i=n;i<m;i++)
#define FROMJ(n,m)          for(int j=n;j<m;j++)
#define RFROM(n,m)          for(int i=n-1;i>=m;i--)
#define RFROMJ(n,m)         for(int j=n-1;j>=m;j--)
#define STL_FOR(a)          for(auto i=a.begin();i!=a.end();i++)
#define STL_FORJ(a)         for(auto j=a.begin();j!=a.end();j++)
#define STL_FORN(a,x)       for(auto x=a.begin();x!=a.end();x++)
#define STL_FROM(a,n,m)     for(auto i=n;i!=m;i++)
#define STL_FROMJ(n,m)      for(auto j=n;j!=m;j++)
#define RSTL_FOR(a)         for(auto i=a.rbegin();i!=a.rend();i++)
#define RSTL_FORJ(a)        for(auto j=a.rbegin();j!=a.rend();j++)

// Types
#define ll             long long int
#define vec                   vector
#define veci             vector<int>
#define pb                 push_back
#define pf                push_front
#define fi                     first
#define se                    second
#define umap           unordered_map
#define ummap     unordered_multimap
#define mmap                multimap
#define mset                multiset
#define uset           unordered_set
#define umset     unordered_multiset
#define endl                    '\n'
#define all(a)    a.begin(), a.end()

// I/O
void read() {}
template<typename type, typename... types>
void read(type& arg, types&... args) { cin >> arg; read(args...); }

void write() { cout << endl; }
template<typename type, typename... types>
void write(type arg, types... args) { cout << arg << ' '; write(args...); }

#define dbg(x) cerr<<#x<<" = "<<x<<endl;

template<typename T>
class arr {
    uint32_t n;
    T* a;
public:
    arr(const uint32_t& size): n(size) {
        a = new T[n];
    }
    ~arr() {
        delete[] a;
    }
    T& operator[] (uint32_t indx) {
        return a[indx];
    }
    uint32_t size() {
        return n;
    }

    friend istream& operator>> (istream& in, arr& self) {
        FOR(self.size()) {
            in >> self[i];
        }
        return in;
    }
    friend ostream& operator<< (ostream& out, arr& self) {
        FOR(self.size()) {
            out << self[i] << '\n';
        }
        return out;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

