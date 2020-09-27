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
    for (int i = 0 ; i < n ; i++){
		
		cin >> a[i] ;
		
	}
	for (int i = 0 ; i < n ; i++){
		
		if (i != 0 && i != n-1) cout << min(a[i]-a[i-1],a[i+1]-a[i])<< " " ;
		else if (i == 0 ) cout << a[i+1]-a[i]  << " " ;
		else if( i== (n-1)) cout << a[i]-a[i-1] << " " ;
		
		cout << max(a[n-1]-a[i] , a[i]-a[0] )<< endl ;
		
	}
    return 0 ;
}  
 
