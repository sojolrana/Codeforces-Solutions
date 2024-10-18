// Platform: Codeforces
// Problem: Codeforces 26A (https://codeforces.com/problemset/problem/26/A)
// Approach: 
// - Use the Sieve of Eratosthenes to generate primes up to `n`.
// - For each number `i` from 1 to `n`, count how many primes divide `i`.
// - If exactly two primes divide `i`, increment the count.
// Time complexity: O(n log(log n)) for sieve, O(n * p) where p is the number of primes up to each `i`.

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

bool mark[3000];

vector<lli> sieve(int n){
    vector<lli> primes;
    for(lli i = 2; i <= n; i++){
        if(mark[i] == 0){
            primes.push_back(i);
            for(lli j = i * i; j <= n; j += i){
                mark[j] = 1;
            }
        }
    }
    return primes;
}

void solve(){
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        vector<lli> arr = sieve(i);
        int temp = 0;
        for(int j = 0; j < arr.size(); j++){
            if(i % arr[j] == 0){
                temp++;
            }
        }
        if(temp == 2){
            cnt++;
        }
    }
    cout << cnt << nl;
}

int main(){
    lli t = 1;
    //cin >> n;
    while (t--){
        solve();
    }
    return 0;
}
