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
     
   int main() {
       ios::sync_with_stdio(false);
       cin.tie(0);
     
      int n;
      cin >> n ;
      int a[n+1] ;
      for (int i = 1 ; i <= n ;i++){
		   
		  cin >> a[i] ;
		  }
		  a[n+1] = 0 ;
		 int m ;
		 cin >> m ;
		  while(m--){
			  
			  int x , y ;
			  cin >> x >> y ;
			  
			  a[x-1] += y-1 ;
			  a[x+1] += a[x]-y ;
			  a[x] = 0 ;
			  
			  } 
	   for (int i = 1 ; i <= n ; i++){
		   
		   cout << a[i] << endl ;
	   }
   
    return 0 ;
}  
 
