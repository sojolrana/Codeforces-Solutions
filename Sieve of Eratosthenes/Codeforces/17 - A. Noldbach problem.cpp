// Platform: Codeforces
// Problem: Codeforces 17A (https://codeforces.com/contest/17/problem/A)
// Approach: 
// - Generate primes up to n using the Sieve of Eratosthenes.
// - Check if there exists a prime of the form p[i] + p[i+1] + 1 using binary search.
// - Count primes meeting the condition and compare to k.
// Time complexity: O(n log(log n)) for sieve, O(n / log n * log(n / log n)) for binary search.

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

bool mark[1000 + 1];

vector<lli> sieve(int n){
    vector<lli> primes;
    for(lli i = 2; i <= n; i++){
        if(mark[i] == 0){
            primes.push_back(i);
            for(lli j = i*i; j <= n; j += i){
                mark[j] = 1;
            }
        }
    }
    return primes;
}

int bSearch(vector<lli> &primes, int item){
    int beg = 0, end = primes.size() - 1, mid;
    mid = (beg + end) / 2;
    while(beg <= end && primes[mid] != item){
        if(item < primes[mid]){
            end = mid - 1;
        }
        else if(item > primes[mid]){
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }
    if(beg > end){
        return -1;
    }
    else{
        return item;
    }
}


void solve(){
    lli n, k, cnt = 0;
    cin >> n >> k;

    vector<lli> arr = sieve(n);

    for(lli i = 0; i < arr.size() - 1; i++){
        if((arr[i] + arr[i + 1] + 1) == bSearch(arr, (arr[i] + arr[i + 1] + 1))){
            cnt++;
        }
    }
    if(cnt >= k){
        cout << YES << nl;
    }
    else{
        cout << NO << nl;
    }
}

int main(){
    lli t = 1;
    //cin >> n;
    while (t--){
        solve();
    }
    return 0;
}
