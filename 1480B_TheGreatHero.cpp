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

int _ceiling(db x)
{
    int intpart = (int)x;
    db remain = x - intpart;
    if (remain <=  Epsilon)
    {
        return intpart;
    }
    else
    {
        return intpart + 1;
    }
}

int maxValue(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    fastinout;
    int t;
    cin >> t;
   /* while (t--)
    {
        int A, B;
        int n;
        cin >> A >> B >> n;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        int killed(0);
        int totalMake(0);
        int totalDeal(0);
        for (int i = 0; i < n; i++)
        {
            int times;
            while (true)
            {
                if (B <= 0)
                {
                    break;
                }
                b[i] -= A;
                B -= a[i];
                if (b[i] <= 0)
                {
                    killed++;
                    break;
                }
            }

        }   
        for (int i = 0; i < n; i++)
        {
            if (B <= 0)
            {
                break;
            }
            while (b[i] > 0)
            {
                if (B <= 0)
                {
                    break;
                }
                b[i] -= A;
                B -= a[i];
                if (B < 0)
                {
                    break;
                }
                if (b[i] <= 0)
                {
                    killed++;
                }
                if (B <= 0)
                {
                    break;
                }
            }
        }
        if (killed == n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }*/
    while (t--)
    {
        ll A, B, n;
        cin >> A >> B >> n;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            b.push_back(x);
        }
        ll Sum(0), maxA(0);
        for (int i = 0; i < n; i++)
        {
            int times = (b[i] + A - 1) / A;
            Sum += 1ll * times * a[i];
            maxA = maxValue(maxA, a[i]);
        }
        Sum -= maxA;
        B -= Sum;
        if (B > 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
   return 0;
}

