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
		
	 string a ;
	 cin >> a ;
	 int count = 0 ;
	 vector <char> k ;
	 for (int i = 0 ; i < (int) a.size() ; i++){
		 bool z = true ;
		 for (int y =  0 ; y < (int) k.size() ; y++){
			 
			 if ( a[i] == k[y] ) {
				 z = false ;
				 break ;
			 }
			 
           }
           if (z == true) {
			   count++;
			   k.push_back(a[i]) ;
		   }
	 }
	 if ( (int) k.size()a% 2 == 0 ) cout << "CHAT WITH HER!" ;
	 else cout << "IGNORE HIM!" ;
		return 0 ;
	}
