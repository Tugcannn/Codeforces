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
		int a[n];
		for (int i = 0 ; i < n ; i++){
			
			cin >> a[i] ;
		}
		sort(a,a+n) ;
		for (int i = 0  ; i < n ; i++){
			
			cout << a[i] << " "  ;
		}
		return 0 ;
	}
