#include <iostream> 
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <algorithm> 
#include <vector >
#include <cctype>


using namespace std ;

int main (){
	 
	int n ;
	cin >> n ;
	int count = 0 ;
	int y = 0 ;
	int a[1000] ;
	    while(n--) {
			int x ;
			cin >> x ;
			a[y] = x ;
			if (y >= 1) {
				for (int z = 0 ; z <= y ; z++) {
				
					if (y == z) {
						count++ ;
						break ;
					}
						if (a[z] <= a[y]) {
						break ;
					}
				}
				
			}
			if (y >= 1) {
				for (int z = 0 ; z <= y ; z++) {
					
					if (y == z) { 
						count++ ;
						break ;
					}
					if (a[z] >= a[y]) {
						break ;
					}
				}
				
			}
			y++ ;
		}
		cout << count ;
	 }
