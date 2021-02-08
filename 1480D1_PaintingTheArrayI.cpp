#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <concurrent_priority_queue.h>
#include <string>
#include <cstring>
#include <cmath>
#include <complex>
#include <bitset>
#include <algorithm>
#include <cstdlib>
#include <iomanip>

using namespace std;

typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;
typedef float fl;
typedef double db;

#define name ""
#define inoutfile FILE *fi, *fo; freopen_s(&fi, name".inp", "r", stdin); freopen_s(&fo, name".out", "w", stdout)
#define fastinout ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define fillArray(a, n, t) for (int i = 0; i < n; i++) { a[i] = t; }
#define Inf 1e17
#define Mod 1000000007
#define Pi acos(-1.00)
#define Epsilon 1e-6

int main()
{
    /*fastinout;
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    bool check[100001];
    fillArray(check, 100001, true);
    sort(a.begin(), a.end());
    set<int> set1;
    set<int> set2;
    for (int i = 0; i < n; i++)
    {
        if (set1.count(a[i]) > 0)
        {
            set2.insert(a[i]);
        }
        else
        {
            set1.insert(a[i]);
        }
    }
    cout << set1.size() + set2.size();
  */  
    fastinout;
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> a1, a2;
    int back1 = -1, back2 = -1;
    for (int i = 0; i < n; i++)
    {
        int x = a[i];
        if (x == back1 && x == back2)
        {
            continue;
        }
        else if (back1 == back2 && x != back1)
        {
            a1.push_back(x);
            back1 = x;
        }
        else if (x == back1 && x != back2)
        {
            a2.push_back(x);
            back2 = x;
        }
        else if (x != back1 && x == back2)
        {
            a1.push_back(x);
            back1 = x;
        }
        else //x is different from both back1 and back2
        {
            int j = i;
            while (j < n - 1 && a[j] != a[j + 1])
            {
                j++;
            }
            if (j < n - 1 && a[j] == a[j + 1])
            {
                if (a[j] == back1)
                {
                    for (int k = i; k <= j; k++)
                    {
                        a1.push_back(a[k]);
                        back1 = a[k];
                    }
                }
                else
                {
                    for (int k = i; k <= j; k++)
                    {
                        a2.push_back(a[k]);
                        back2 = a[k];
                    }
                }
            }
            else
            {
                for (int k = i; k <= j; k++)
                {
                    a1.push_back(a[k]); 
                    back1 = a[k];
                }
            }
            i = j;
        }
    }
    int res = a1.size() + a2.size();
    cout << res << "\n";
    return 0;
}
