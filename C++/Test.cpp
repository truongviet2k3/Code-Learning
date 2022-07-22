#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

typedef long long ll;

const int maxn = 2e5+5;
void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}
int n, m, t;
int ans[maxn], A[maxn], prv[maxn];

int main(){
    int a, b;
    cin >> a >> b;
    swap(a,b);
    cout << a << b;
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cin >> t;
    // while(t--){
    //     cin >> n;
    //     for(int i = 1; i <= n; i++){
    //         cin >> A[i];
    //         ans[i]=prv[i]=0;
    //     }
    //     for(int i = 1; i <= n; i++){
    //         if(!prv[A[i]]){
    //             prv[A[i]]=i;
    //             ans[A[i]]=1;
    //         }
    //         else{
    //             ans[A[i]]+=(i-prv[A[i]])&1;
    //             prv[A[i]]=i;
    //         }
    //     }
    //     for(int i = 1; i <= n; i++)cout << ans[i] << " ";
    //     cout << "\n";
    // }
}
