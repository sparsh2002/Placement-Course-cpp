#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define rep(i, a, b) for (int i = a; i < b; i++)

long long INFF = 1000000000000000005LL;
double EPS = 1e-9;
const ll N = 10000000;
double PI = acos(-1);
int MOD = 1000000007;
int mod = MOD;
long long n = 2;
void mult(vector<vector<long long> > &a, vector<vector<long long> > b)
{
    if (a.size() == 0)
    {
        a = b;
        return;
    }
    vector<vector<long long> > c(n, vector<long long>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
            }
        }
    }
    a = c;
}

vector<vector<long long> > mult2(vector<vector<long long> > &a, vector<vector<long long> > b, int x, int y, int z)
{
    if (a.size() == 0)
    {
        a = b;
        return a;
    }
    vector<vector<long long> > c(y, vector<long long>(z));
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= mod;
            }
        }
    }
    return c;
}

void exp(vector<vector<long long> > &a, long long m)
{
    vector<vector<long long> > c;
    while (m)
    {
        if (m & 1)
        {
            mult(c, a);
        }
        mult(a, a);
        m >>= 1;
    }
    a = c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long m;
        cin >> m;
        if(m==1 or m==0){
            cout << m << "\n";
        }
        else{
            // creating transition matrix
            vector<vector<long long> > a;
            vector<long long> temp;
            temp.push_back(0);
            temp.push_back(1);
            a.push_back(temp);
            temp[0] = 1;
            a.push_back(temp);
            vector<vector<long long> > b;
            temp[0] = 1;
            temp[1] = 1;
            b.push_back(temp);
            exp(a, m-1);
            vector<vector<long long> > ans = mult2(b, a, 1, 2, 2);
            cout << ans[0][0] << "\n";
        }
    }
    
    return 0;
}