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
       
        int n ; 
        cin >> n ;
        int t[n] ;
        int a1 = 0 ;
        int a2 = 0 ;
        int a3 = 0 ;
        for (int i = 1 ; i <= n ; i++){
			
			cin >> t[i] ;
			if (t[i] == 1) a1 ++;
			else if (t[i] == 2 ) a2 ++;
			else a3 ++;
			
		}
		int x = min(a1,a2) ;
		int count = min(x,a3) ;
		cout << count << endl ;
		if (count != 0 ){
			
			while(count--){
				
				for (int i = 1 ; i <= n ; i++){
					
					if (t[i] == 1 && t[i] != 0) {
						cout << i << " " ;
						t[i] = 0 ;
						break ;
				}
				   }
				   	for (int i = 1 ; i <= n ; i++){
					
					if (t[i] == 2 && t[i] != 0) {
						cout << i << " " ;
						t[i] = 0 ;
						break ;
				}
				   }
				   	for (int i = 1 ; i <= n ; i++){
					
					if (t[i] == 3 && t[i] != 0) {
						cout << i << " " << endl ;
						t[i] = 0 ;
						break ;
				}
				   }
			
		}
	}
    return 0 ;
}  
 
