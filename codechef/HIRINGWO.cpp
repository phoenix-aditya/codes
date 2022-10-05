#include<bits/stdc++.h>
//#include<chrono>
//#include<string.h>
//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define endl "\n"
//#define f(i,a,b) for(int i=a;i<b;i++)
//#define m 1000000007
using namespace std;
//using namespace std::chrono;

//aditya ranaut- phoenix_aditya
vector<int> factors;
int sum=0;
void factorize(int x){
    int num=1;
    while(x%2==0){
        x=x/2;
        num=num*2;
    }
    if(num!=1)
    {sum+=num;
        factors.push_back(num);}
    
    for(int i=3;i<=sqrt(x);i=i+2){
        num=1;
        while(x%i==0){
            x=x/i;
            num=num*i;
        }
        if(num!=1)
        {
            sum+=num;
            factors.push_back(num);}
    }
    
    if(x>2)
    {factors.push_back(x);sum+=x;}
}

int recur(vector<int> temp, int pos, vector<int> factor){
    int s=factor.size();
    if(pos == s){
        return accumulate(temp.begin(), temp.end(), 0);
    }
    int ans=INT_MAX;
    for(int i=0;i<temp.size();i++){
        temp[i]*=factors[pos];
        ans=min(ans, recur(temp, pos+1,factors));
        temp[i]/=factors[pos];
    }
    return ans;
}



void solve()
{
    sum=0;
    factors.clear();
    int k,x;
    cin>>k>>x;
    
    factorize(x);
    int ans=0;
    int ss=factors.size();
    if(ss==k){
        ans=sum;
    }
    else if(ss<k){
        ans=sum;
        ans+=(k-factors.size());
    }
    else{
        vector<int> temp(k,1);
        ans=recur(temp, 0,factors);
    }
    cout<<ans<<endl;
}



int main()
{
//        auto start = high_resolution_clock::now();
    
    speed;
    wh(t)
     {solve();}
    
//        auto stop = high_resolution_clock::now();
//        auto duration = duration_cast<microseconds>(stop - start);
//
//          cout << "Time taken by function: "
//               << duration.count()/1000 << " microseconds" << endl;
    
    return 0;
}
