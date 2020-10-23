// import all required headers useful for compititions
#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
#define ll long long
// macro for fast input output
#define Fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
int main()
{
Fastio;
  //taking test case
ll t; cin>>t;
  // staring loop for test case
while(t--) {
  // taking the value of n
ll n,x,flag=0, flag2=0,m=INT_MIN; cin>>n; ll a[n]; 
  // Taking the array
for(ll i=0;i<n;i++)
cin>>a[i]; 
  // assign the first value of array to x
x=a[0];
for(ll i=1;i<n;i++)
{
  // Here if all values of array is same then flag == 0 so this indicates that solution is not possible
if(a[i]==x)
continue;
else
{
  // if there exist different items then we find solution
flag=1;
break;
}
}
if(flag==0)
cout<<-1<<endl;
else
{
for(ll i=0;i<n;i++)
  // Here we assign the amx value to m
m=max(m,a[i]);
  
  // Here we find the latest maximum value inside the array which has its adgecent neighbour less than him
  
for(ll i=1;i<n-1;i++)
{
if(a[i]==m && (a[i+1]<a[i] || a[i-1]<a[i]))
{
cout<<i+1<<endl;
flag2=1;
break;
}
}
if(flag2==0)
{
if(a[0]==m && a[0]>a[1])
{
cout<<1<<endl;
flag2=1;
}
if(a[n-1]>a[n-2] && flag2==0)
cout<<n<<endl;
}
}
}
}
