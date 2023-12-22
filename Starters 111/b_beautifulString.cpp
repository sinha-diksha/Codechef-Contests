/**/

#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;

long long solve(string s)
{
  map<char, int> mp;
  for (int i = 0; i < s.length(); i++)
  {
    mp[s[i]]++;
  }

  int ans = 1;
  map<char, int>::iterator it = mp.begin();
  while (it != mp.end())
  {
    ans = ((ans % mod * (it->second + 1) % mod)) % mod;
    it++;
  }
  return ans - 1;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << solve(s) << endl;
  }
}