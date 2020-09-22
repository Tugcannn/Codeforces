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
		int police = 0 ;
		int count = 0 ;
		int x ;
		
		for (int i = 0 ; i < n ; i++){
		    cin >> x ;	
			if (x != -1) police += x ;
			else if ( x== -1 && police == 0) count ++ ;
			else police -- ;
		}
		cout << count ;
		 return 0 ;
	}
