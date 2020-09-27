#include <iostream> 
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <algorithm> 
 #include <vector > 
#include <cctype>
#include <ctime>
using namespace std;
      
 typedef long long ll ;
 typedef vector<int> vi;
 
 #define pb push_back
 #define mp make_pair
 
 #define fi first
 #define se second 
 
   int main() {
       ios::sync_with_stdio(false);
       cin.tie(0);
       
     string a,b;
    cin >> a >> b;
    if (a==b)
    cout << -1;
    else
    cout << max(a.size(),b.size());
}  
 
