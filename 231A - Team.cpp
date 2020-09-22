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
	   int count = 0 ;
	   while(n--){
		   int x ;
		   int a = 0 ;
		   for (int i = 0 ; i < 3 ; i++){
			    cin >> x;
			    if ( x == 1 ) a ++ ;
			   
		   }
		   if ( a >= 2 ) count ++;
	   }
	   cout << count ;
		return 0 ;
	}
