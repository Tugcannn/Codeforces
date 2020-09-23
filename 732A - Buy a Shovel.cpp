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
		 
      int k , r ;
	 cin >> k >> r ;
	 int count = 1 ;
	 while ((k*count % 10) != r ){
		
		    
		    if (k*count % 10 == 0 ) break ;
		    count ++ ;
		     
	 }
	 cout << count ;
		 return 0 ;
	}
