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
       
      int n ;
      cin >> n ;
      int a[n] ;
      for (int i = 0 ; i < n ; i++) {
		  
		  cin >> a[i] ;
		  
	  }
	  sort(a,a+n) ;
	  int count = 0 ;
	  
	  for (int i = 1 ; i < n-1 ; i++){
		  
		  if (a[i] != a[0] && a[i] != a[n-1]) count ++ ;
		  
	  }
	  cout << count ;
return 0 ;
}  
 
