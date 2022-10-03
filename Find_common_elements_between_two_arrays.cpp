#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(int a[] , int b[] , int n , int n1){
	sort(a , a+n);
	sort(b , b+n1);

	vector<int> common;
	int i = 0 , j =0;
	while(i < n && j < n1){
		if(a[i] == b[j]){
			common.push_back(a[i]);
			i++;
			j++;
		}
		else if(a[i] < b[j]){
			i++;
		}else{
			j++;
		}
	}

	for(auto i: common){
		cout<<i<<" ";
	}
}


int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	int n;
	cin>>n;
	int n1;
	cin>>n1;

	int a[n] , b[n1];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n1; i++){
		cin>>b[i];
	}

	solve(a , b , n , n1);

	return 0;

}