/**/

#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

int solve(string s)
{
  map<char, int> mp;
  for (int i = 0; i < s.length(); i++)
  {
    mp[s[i]]++;
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cout << solve(s) << endl;
  }
}