#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;
 
//aditya ranaut- phoenix_aditya
long long ans=0;
long long pos=0;
bool visited[7][7]={0};
 
char s[49];
 
void dfs(long long r, long long c)
{
    //cout<<r<<" "<<c<<" "<<pos<<endl;
    
    if(r==6 && c==0)
    {
        if(pos==48)
            ans++;
        return;
    }
    if(s[pos]!='?')
    {
        visited[r][c]=true;
        switch(s[pos])
        {
            case 'U':
        if(r>0 && !visited[r-1][c])
        {
            pos++;
            dfs(r-1, c);
            pos--;
        }
                break;
            case 'D':
        if(r<6 && !visited[r+1][c])
        {
            pos++;
            dfs(r+1, c);
            pos--;
        }
                break;
            case 'L':
        if(c>0 && !visited[r][c-1])
        {
            pos++;
            dfs(r, c-1);
            pos--;
        }
                break;
            case 'R':
        if(c<6 && !visited[r][c+1])
        {
            pos++;
            dfs(r, c+1);
            pos--;
        }
                break;
        }
        visited[r][c]=false;
        return;
    }
    bool t= visited[r][c] || (c>0 && c<6 && !visited[r][c+1]&& !visited[r][c-1] && ((r==0 && visited[r+1][c]) || (r==6 && visited[r-1][c] ))) || (r>0 && r<6 && !visited[r+1][c] && !visited[r-1][c] && ((c==0 && visited[r][c+1]) || (c==6 && visited[r][c-1]))) || (r>0&&r<6&&c>0&&c<6 && visited[r-1][c] && visited[r+1][c] && !visited[r][c-1] && !visited[r][c+1]) || (r>0&&r<6&&c>0&&c<6 && visited[r][c+1] && visited[r][c-1] && !visited[r-1][c] && !visited[r+1][c]);
    
    if(t)
        return;
 
    visited[r][c]=true;
    
    if(r>0 && !visited[r-1][c])
    {
        pos++;
        dfs(r-1, c);
        pos--;
    }
    if(r<6 && !visited[r+1][c])
    {
        pos++;
        dfs(r+1, c);
        pos--;
    }
    if(c>0 && !visited[r][c-1])
    {
        pos++;
        dfs(r, c-1);
        pos--;
    }
    if(c<6 && !visited[r][c+1])
    {
        pos++;
        dfs(r, c+1);
        pos--;
    }
    
    visited[r][c]=false;
}
 
int main()
{
//    auto start = high_resolution_clock::now();
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<48;i++)
        cin>>s[i];
    
    
    dfs(0, 0);
    cout<<ans;
//    auto stop = high_resolution_clock::now();
//    auto duration = duration_cast<microseconds>(stop - start);
//
//      cout << "Time taken by function: "
//           << duration.count() << " microseconds" << endl;
    return 0;
}
