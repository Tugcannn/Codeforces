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
	string s ;
	cin >> s;
	int a = 0 ;
	int d = 0 ; 
    for (int i = 0 ; i < n ; i++){
		
		if (s[i] == 'A' ) a ++ ;
		else d ++ ;
		
	}
	if ( a > d ) cout << "Anton" ;
	else if ( d > a ) cout << "Danik" ;
	else cout << "Friendship" ;
		return 0 ;
	}
