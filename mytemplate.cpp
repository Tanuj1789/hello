#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include<bits/stdc++.h>
#include<ctype.h>
# define pb push_back
#define fst first
#define sec second
#define ll long long int
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define ull unsigned long long int
#define mod 1000000007
#define fo(i,n) for(ll i=0;i<n;i++)
#define endl "\n"
#define rev(i,n) for(ll i=n-1;i>=0;i--)
#define fo1(i,n) for(ll i=1;i<=n;i++)
#define boolsize 1000001
#define pi pair<ll,ll>
#define vi vector<ll>
#define vii vector<pi>

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x);	//here
#else
#define debug(x)
#endif


using namespace std;

template<typename T>
void _print(T x){
	cerr<<x<<endl;
}

template<typename T>
void _print(vector <T> v)
{
	cerr<<"[";
    for(T x:v){
    	cerr<<x<<" "	;
    }
    cerr<<"]";
    cerr<<endl;

}
template<typename T>
void _print(set <T> s)
{
	cerr<<"[";
    for(T x: s)
        cerr<<x<<" ";
    cerr<<"]";
    cerr<<endl;

}

template<typename T,typename P>
void _print(map <T,P> m)
{
		cerr<<"[";
    for(auto it=m.begin();it!=m.end();it++)
        cerr<<"(" <<it->first<<" "<< it->second << ") ";
        	cerr<<"]";
    cerr<<endl;
}


template<class T>
void showvectorpair(vector<T> v)
{

    for(auto it=v.begin();it!=v.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    cout<<endl;
}

template<typename T>
bool comp(T a,T b)
{
    return (a>b);
}
template<class T>
bool comppair(T a,T b)
{
    if(a.first==b.first)
        return(a.second>b.second);
    return (a.first>b.first);
}
bool sameparity(ll a,ll b)
{
    return (a%2==b%2);
}
bool difparity(ll a,ll b)
{
    return !(a%2==b%2);
}
bool isprime(ll x)
{   if(x<=1)
     return false;
    for(ll i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
bool iseven(ll x)
{
    return !(x%2);
}
bool isodd(ll x)
{
    return (x%2);
}
char add(char a,char b)
{
	if(a=='1' && b=='1')
	return '2';
	else if(a=='1' || b=='1')
	return '1';
	else
	return '0';
}

/// check for test case before submitting
void fun()
{
		ll n;
		cin>>n;
		vector <ll> v(n);
		rep(i,0,n)
			cin>>v[i];

}
int main()
{

    ios_base::sync_with_stdio(0); ///cant use scanf, printf
    cin.tie(0);cout.tie(0); /// no longer auto flush cout before each cin, remove for interactive
    //cout << fixed << setprecision(11); /// no scientific output
    ll test=1;
    cin>>test;
    while(test--)
    {

			fun();
//         if(vfun())
//            cout<<"YES\n";
//         else
//            cout<<"NO\n";
    }
}
///before sub
/// check for value of zero and single input in array
///loop vars,1LL in mult, equal, one, bounds, int v ll, endl, finish taking inputs
/// check whether test cases are given or not


