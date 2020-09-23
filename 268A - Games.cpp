#include <iostream> 
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <algorithm> 
#include <vector >
#include <cctype>
#include <ctime>
 

using namespace std ;
 
    int main(){
		 
	   int n ;
	   cin >> n ;
	   int home[n];
	   int away[n];
	   
	  for (int i = 0 ; i < n ; i++){
		  cin >> home[i];
		  cin >> away[i] ;
		  
	  }
	  int count = 0 ;
	  for (int i = 0 ; i < n ; i++){
		    for (int y = 0 ; y < n ; y++){
				
				if (home[i] == away[y]) count ++ ;
			}
		   }
		   cout << count ;
		 return 0 ;
	}
