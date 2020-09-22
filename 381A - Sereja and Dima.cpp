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
		 cin >> n;
		 vector <int> k(n);
		 for (int i= 0 ; i < n ;i++){
			 
			 cin >> k[i] ;
		 }
		 int s= 0 ; 
		 int d = 0 ;
		 bool kim = true ;
		 while(k.size() !=0 ) {
			 
			 if (k[0] >k[(int)k.size()-1]) {
				 if (kim == true ) {
				 s += k[0] ;
				 k.erase(k.begin(),k.begin()+1) ;
				 kim = false ;
			 } 
			 else {
				  d += k[0] ;
			 k.erase(k.begin(),k.begin()+1) ;bb
				 kim = true ;
				 
			 } 
			   }
			 else{ 
				 if (kim == true) {
					 s += k[k.size()-1] ;
					  k.pop_back();
					 kim =false ;
				 }
				 else {
				     d += k[k.size()-1] ; 
				    k.pop_back();
				 kim  = true ;
			 } 
			  } 
		 }
		  cout << s << " " << d ;
		 return 0 ;
	}
