/*Problem: Maximum Score
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    int countOne=0;
    int countZero=0;
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      if(x==1){
        countOne++;
      }else{
        countZero++;
      }
    }

    cout<<min(countOne, countZero)<<endl;
  }
}