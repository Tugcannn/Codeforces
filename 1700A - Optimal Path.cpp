#include <iostream>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector >
#include <cctype>
#include <ctime>
 
using namespace std;
 
typedef long long ll;
typedef vector<int> vi;
 
#define pb push_back
#define mp make_pair
 
#define fi first
#define se second
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n ;
        ll m;
        cin >> m;
        ll x = (m * (m+1)) / 2;
        ll y = ( round(m + (m * n)) / 2) * n;
        cout << x + y - m << endl;
       }
 
    return 0;
}
