#include <iostream> 
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <algorithm> 
#include <vector >
#include <cctype>


using namespace std ;

int main (){
	 
	 long long n  , m ;
	 cin >> n >> m ;
	 long long count = 0 ;
	 int x = 1 ;
	 
	 while (m--) {
	        	 
		  int a ; 
		  cin >> a ;
		  while(x != a) {
			  
			  if (x < a) {
				  
				  count += a-x ;
				  x = a ;
			  }
			  else {
			  count += n-x+a ;
			   x  = a ; 
		  }
			  if (x > n) x = 1 ;
			  
			  }
		 
			 	 
	 }
	 cout << count ;
     return 0; 
	 }
