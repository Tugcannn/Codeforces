#include <iostream> 
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <algorithm> 
#include <vector >
#include <cctype>
#include <ctime>
using namespace std;
   
   int main() {
 
	int a[4] ;
	for(int n = 0 ; n< 4 ; n++){
		cin >> a[n] ;
		
	}
	int count = 0 ;
	for(int i = 0 ; i < 4 ; i++){
    for(int y= 0 ; y < i ; y++){
		if(a[i] == a[y]) {
		 count ++ ;
		 break ;
 }
}
}
      cout << count ;
    return 0 ;
}  
 
