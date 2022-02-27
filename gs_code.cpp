#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define wh(t) ll t;cin>>t;while(t--)
#define inn freopen("input.txt", "r", stdin)
#define outt freopen("output.txt", "w", stdout)
#define f(i,a,b) for(ll i=a;i<b;++i)


bool comp(pair<string,int> a, pair<string,int> b){
    return a.second>b.second;
}
int choice(string words[], int costs[], int n){
    int ans = -1;
    
    vector<pair<string, int> > word_map;
    for(int i=0;i<n;i++){
        word_map.push_back(make_pair(words[i], costs[i]));
    }

    sort(word_map.begin(), word_map.end(), comp);
    int currlen = 30;
    for(int i=0;i<word_map.size();i++){
        if(currlen >= word_map[i].first.length()){
            cout<<currlen<<":here  ";
            currlen = currlen - (word_map[i].first.length()+1);
            cout<<word_map[i].first.length()<<" ";
            if(ans == -1){
                ans=word_map[i].second;
            }else{
                ans += word_map[i].second;
            }
        }
        if(currlen<=0){
            break;
        }
    }

    return ans;
}

int main(){
    fast;
    // int n = 5;
    // string words[] = {"Program","Queue", "stack", "linked_LIST", "update"};
    // int cost[] = {10, 3, 2, 8, 4};

    int n=3;
    string words[] = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaab", "aaaaaaaaaaaaaaaaaaaaaaaaaaaabb"};
    int cost[] = {3, 5, 6};
    cout<<choice(words, cost, n); 
    
    return 0;
}