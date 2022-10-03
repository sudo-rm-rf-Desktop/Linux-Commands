#include<bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> ar[10000];
int vis[10000];

void dfs(int v){
	vis[v] = 1;
	for(int child: ar[v])
		if(!vis[child])
			dfs(child);
	
}

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	    int n, m,a,b;
	    cin>>n>>m;

	    for(int i=1; i<=m; i++){
	    	cin>>a>>b , ar[a].push_back(b) , ar[b].push_back(a);
	    }

	    int cc = 0;

	    for(int i=0; i<n; i++){
	    	if(!vis[i])
	    		dfs(i) , cc++;
	    }

	    cout<<cc;

}