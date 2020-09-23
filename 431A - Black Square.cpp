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
		 
	    int a[5] ;
	    for (int i = 1 ; i <= 4 ; i++)
	             cin >> a[i] ;
	    string s ;
	    cin >> s;
		int sum = 0 ;
		for (int i = 0 ; i <(int) s.size() ; i++){
			
			sum += a[s[i] - '0'] ;
		}
		cout << sum ;
		 return 0 ;
	}
