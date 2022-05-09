#include<iostream>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<map>
#include<algorithm>
#include<sstream>
#include<climits>
#include<utility>
#define MX 100000
#define fs first
#define sec second
#define vi vector<int>
#define pi pair<int, int>
#define TC int T;cin>>T;while(T--)
#define loop(i,a) for(int i=0;i<a;i++)
#define loop1(i,a,c) for(int i=1;i<=a;i++)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define mp(x, y) make_pair((x), (y))
#define ll long long int
#define iter(c) typeof(c.begin())
#define foreach(it, c) for(iter(c) it = c.begin(); it != c.end(); it++)
using namespace std;
bool visited[2001];

vector<int>v[2001];
int c=1;
int d[2001];

void dfs(int x,int d)
{
    visited[x] = true;
	c = max(c,d);
	for(int i = 0; i < v[x].size(); i++)
	{

			// if(!visited[v[x][i]])dfs( v[x][i] ,d+1);
            dfs( v[x][i] ,d+1);

	}
}

int main()
{
	int t;
	memset(visited,false,sizeof visited);
	for(int i=0;i<2000;i++)d[i]=1;
	cin>>t;
	for(int i=0;i<2001;i++)
	{
		v[i].clear();
	}
	for(int i=1;i<=t;i++)
	{
		int x;
		cin>>x;
		if(x==-1)continue;
		v[x].push_back(i);
	}
	for(int i=1;i<=t;i++)
	{
		if(!visited[i])dfs(i,1);
	}
	cout<<c;
	
}