/*make all array element equal*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }

    ll maxElement = *max_element(v.begin(), v.end());
    ll minElement = *min_element(v.begin(), v.end());
    ll ans1 = maxElement - minElement;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
      sum += (maxElement - v[i]);
    }
    ll ans2 = ((sum + m - 1) / m);
    cout << max(ans1, ans2) << endl;
  }
}