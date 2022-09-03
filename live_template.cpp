#include <iostream>
#include <limits.h>
#include <algorithm>
#include <math.h>
#include <cctype>
#include <cmath>
#include <bits/stdc++.h>
#include <string>
#include <utility>
#include<vector>
#define ll long long
#define ull unsigned long long
#define fixed(n) fixed << setprecision(n)
//#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define sz(x) int(x.size())
#define charToInt(s) (s - '0')
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define fi first
#define se second
#define number_line iota(all(vec) , 1)
#define nl "\n"
#define pi 3.14159
#define all(s) s.begin(), s.end()
#define rall(v) v.rbegin() , v.rend()
#define Mod 1'000'000'007
#define INF 2'000'000'000
#define Upper(s) transform(all(s), s.begin(), ::toupper);
#define Lower(s) transform(all(s), s.begin(), ::tolower);
using namespace std;
void esraa()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    // freopen("func.in" , "r" , stdin);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif
}
// in chess
bool valid(int a , int b){
    return (a >= 0 and a < 8) and (b >=0 and b < 8) ;
}
bool comp(pair < int , int >&a , pair < int , int >&b){
return a.second < b.second ;
}
bool compare(pair<string, ll> &a, pair<string, ll> &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}
int Lower_bound(int x , int n){
    int l = -1 , r = n;
    while(l < r - 1){
        int mid = l + (r - l) / 2;
        if(vec[mid] >= x)
            r = mid;
        else l = mid;
    }
    return r;
}
bool prime(ll n){
    if(n < 2 or (n % 2 == 0 and n != 2)) return false;
    for(int i = 3 ; i <= sqrt(n) ; i += 2)
         if(n % i == 0) return false;
    return true;
}
vector < ll > prime_factor(ll n){
     vector < ll > factors;
     while(n % 2 == 0){
        factors.push_back(2);
        n /= 2;
     }
     for(int i = 3 ; i <= sqrt(n) ; i++){
         while(n % i == 0){
            factors.push_back(i);
            n /= i;
         }
     }
     if(n > 2) factors.push_back(n);
     return factors;
}
int sumRange(int i, int j , vector < int >&Nums) {
     // index 0
    return std::accumulate(Nums.begin() + i - 1, Nums.begin() + j , 0, std::plus<>());
}
int Upper_bound(int x , int n){
    int l = -1 , r = n;
    while(l < r - 1){
        int mid = l + (r - l) / 2;
        if(vec[mid] <= x)
            l = mid;
        else r = mid;
    }
    return l;
}
//vector < vector < int > > vec(n , vector < int  >(n));
void solve(){
}
int main()
{
    esraa();
    int t = 1;
    //cin >> t;
    while(t--)
        solve();
    return 0;
}
