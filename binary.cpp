#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
using namespace std;
 
void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
    init_code();
    int n;
    cin>>n;
 std::vector<int> v(n);
 fr(0,n)cin>>v[i];
int find;
cin>>find;

 int low = 0;
 int high = n-1;
 int mid;
 while( high - low > 1){
    mid = low + ( high - low) /2;
    if(v[mid] < find ){
        low = mid+1;
    }
    else{
        high = mid;
    }}
    if(v[low] == find){
        cout<<low;
    }
    else if( v[high ] == find){
        cout<<high;
    }
    else{
        cout<<"element not Found";
    }

}
