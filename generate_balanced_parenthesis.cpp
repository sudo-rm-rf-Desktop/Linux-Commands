//i/p => 3
//o/p => ((())) ()()() (()()) (())() etc...

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// void solve(string output, vector<string> &v , int open , int close){
// 		if(open == 0 && close == 0){
// 			v.push_back(output);
// 			return;
// 		}

// 		if(open != 0){
// 			string op1 = output;
// 			op1.push_back('(');
// 			solve(op1 , v , open - 1 , close);
// 		}

// 		if(close > open){
// 			string op2 = output;
// 			op2.push_back(')');
// 			solve(op2 , v , open , close - 1);
// 		}
// }

void _printParenthesis(int pos, int n, int open, int close)
{
    static char str[100];   
      
    if (close == n)
    {
        cout << str << endl;
        return;
    }
    else
    {
        if (open > close)
        {
            str[pos] = '}';
            _printParenthesis(pos + 1, n, open,
                            close + 1);
        }
          
        if (open < n)
        {
            str[pos] = '{';
            _printParenthesis(pos + 1, n,
                             open + 1, close);
        }
    }
}
 
void printParenthesis(int n)
{
    if (n > 0)
        _printParenthesis(0, n, 0, 0);
         
    return;
} 
int main()
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	#endif

	//start-code

	int n;
	cin>>n;

	vector<string> v;
	int open = n;
	int close = n;
	string output = "";
	solve(output, v , close , open);

	for(auto i: v){
		cout<<i<<" ";
	}
}
