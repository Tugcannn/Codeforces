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
	   cin >>n ;
	   string prev =" " ;
	   int count = 0 ;
	   string s ;
	   
	   for (int i = 0 ; i< n ; i++){
		 cin >> s ;   
		   if ( s.compare(prev) != 0 ) {
			   count ++ ;
			   prev = s ;
	       }
   }
   cout << count ; 
		return 0 ;
	}
