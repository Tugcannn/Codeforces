#include <iostream> 
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <algorithm> 
#include <vector >
#include <cctype>
#include <ctime>
using namespace std;
      
 typedef long long ll ;
 typedef vector<int> vi;
 
 #define pb push_back
 #define mp make_pair
 
 #define fi first
 #define se second 
 
   int main() {
       ios::sync_with_stdio(false);
       cin.tie(0);
       
        int n,k ;
        cin >> n >> k ;
     
       int count = 0 ;
       int x = 0 ; 
        for (char i = 'a' ;  i<= 'z' ; i++){
			
			cout << i ;
			count ++ ;
			x++ ;
			if (count == k ) {
				i ='a' ;
				i-- ;
				count = 0;
			}
			if (x == n) break ;
			
		}
        
    return 0 ;
}  
 
