#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define ull unsigned long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define f(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007
using namespace std;
#include<string.h>

//aditya ranaut- phoenix_aditya
struct question{
    int subparts;
    int maxmarks;
    float maxbysub;
    int qno;
    
    question(int max, int sub, int questiono){
        subparts=sub;
        maxmarks=max;
        qno=questiono;
        maxbysub=max/sub;
    }
};
bool comp(question q1, question q2){
    if(q1.subparts!=q2.subparts)
        return q1.subparts>q2.subparts;
    else
        return q1.maxbysub<q2.maxbysub;
}

void solve()
{
    int minmarks, s, n;
    cin>>minmarks>>s>>n;
    
    int sessional[s];
    f(i,0,s){
        cin>>sessional[i];
        sessional[i]=minmarks-sessional[i];
    }
    
    int u,v;
    vector<question> q;
    f(i,0,n){
        cin>>u>>v;
        question temp(u,v,i+1);
        q.push_back(temp);
    }
    
    sort(q.begin(), q.end(), comp);
    
//    for(auto x: q){
//        cout<<x.qno<<" ";
//    }cout<<endl;
    vector<int> selected;
    
    for(int i=0;i<s;i++){
        int pos=0;
        selected.clear();
        while(sessional[i]>0){
            selected.push_back(q[pos].qno);
            sessional[i]=sessional[i]-q[pos++].maxmarks;
        }
        sort(selected.begin(), selected.end());
        cout<<selected.size()<<" ";
        for(auto x: selected){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    
    
    
    
    
}



int main()
{
    speed;
    solve();
    
    return 0;
}
