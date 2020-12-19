
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define DEBUG 1     //デバッグモード　0:OFF 1:ON

#if DEBUG
#define DBG(s, i)   cout << "DEBUG " << s << ":" << i << endl;
#define DBGV(s, v)                              \
    cout << "DEBUG " << s << ": " ;             \
    for (int nv : v)                            \
    {                                           \
        cout << nv <<" ";                       \
    }                                           \
    cout << endl;
#else
#define dbg(s, i) /* ... */
#define dbgv(s, i)     /* ... */
#endif

using Graph = vector<vector<int>>;

int main()
{
    vector<int> r = {3, 5, 7, 9};
    DBG("Now", 6);
    DBGV("aa", r);

}