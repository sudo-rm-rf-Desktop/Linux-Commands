#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(int k,vector<int> &v,int index,int &ans){
	if(v.size() == 1){
		ans = v[0];
		return;
	}
	
	index = ((index + k) % v.size());
	v.erase(v.begin() + index);

	solve(k,v,index,ans);
}
 

int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//start-code

	int n , k;
	cin>>n>>k;

	vector<int> v(n,0);

	for(int i=1; i<=n; i++){
		v[i-1] = i;
	}

	int ans = -1;
	int index = 0;
	k--;
	solve(k,v ,index,ans);
	cout<<ans;
}
