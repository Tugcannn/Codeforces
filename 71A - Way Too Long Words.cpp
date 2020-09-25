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
     cin >> n;
     while(n--){
     string s ;
     cin >> s;
     if (s.length() > 10 ) {
		 
		 cout << s[0] << s.length()-2 << s[s.size()-1] << endl ; 
		 
	 }
	 else cout << s << endl ;
 }
    return 0 ;
}  
 
