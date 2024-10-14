// Problem: Codeforces 1807D (https://codeforces.com/problemset/problem/1807/D)
// Approach: Used Prefix Sum to efficiently compute subarray sums.
// Time complexity: O(n+q) for each test case, where 𝑛 n is the size of the array and 𝑞 q is the number of queries.


#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define sp " "
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / __gcd(a, b)
#define YES "YES"
#define NO "NO"
#define vi vector<int>
typedef long long int lli;

void solve(){
    int n, q, sum = 0;
    cin >> n >> q;
    int arr[n];
    int pref[n + 1] = {0};
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }    
    for(int i = 1; i <= n; i++){
        pref[i] = pref[i - 1] + arr[i - 1];
    }
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        int limitSum1 = (r - l + 1) * k;
        int limitSum2 = pref[r] - pref[l - 1];
        if((sum + (limitSum1 - limitSum2)) % 2){
            cout << YES << nl;
        }
        else{
            cout << NO << nl;
        }
    }
    
}

int main(){
    lli n;
    cin >> n;
    while (n--){
        solve();
    }
    return 0;
}
