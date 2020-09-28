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
      
     string s = "qwertyuiopasdfghjkl;zxcvbnm,./" ;
     string a ,b;
     cin >> a >> b ;
     if (a == "R" ) {
     for (int i = 0 ; i <(int)b.size() ; i++){
		 for (int y = 0 ; y < (int)s.size() ; y++){
			 if ( b[i] == s[y]) {
		 cout << s[y-1] ;
		 break ;
	 }
 }
}
}
 else {
	 for (int i = 0 ; i <(int)b.size() ; i++){
		  for (int y = 0 ; y < (int)s.size() ; y++){
			 if ( b[i] == s[y]) {
		 cout << s[y+1] ;
		 break ;
	 }
	 }
 }
}
return 0 ;
}  
 
