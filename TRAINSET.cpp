  #include<bits/stdc++.h>
  #include<string.h>
  #define pi 3.14159265359
  #define ll long long
  #define wh(t) int t;cin>>t; while(t--)
  #define speed  ios::sync_with_stdio(0); cin.tie(0);
  #define endl "\n"
  #define f(i,a,b) for(int i=a;i<b;i++)
  using namespace std;
  #include<string.h>

  //aditya ranaut- phoenix_aditya

map<string, int> checker;

bool comp(pair<string,int> a, pair<string,int> b)
{
    if(a.first<b.first)
        return true;
    return false;
}

  void solve()
  {
      checker.clear();
      vector<pair<string,int>> dataset;
      
      int n;
      cin>>n;
      int answer=0;
      string s;
      int c;
      for(int i=0;i<n;i++)
      {
          cin>>s>>c;
          dataset.push_back(make_pair(s, c));
      }
      sort(dataset.begin(), dataset.end(), comp);
      
      int zero=0;
      int one=0;
      for(auto x: dataset)
      {
//          cout<<x.first<<" "<<x.second<<endl;
          if(checker.find(x.first)==checker.end())
          {
//              cout<<"RUN\n";
              answer+=max(one,zero);
              one=0;
              zero=0;
              
              checker[x.first]=x.second;
          }
       
          if(x.second==1)
              one++;
          else
              zero++;
//          cout<<zero<<" "<<one<<endl;
//          cout<<answer<<endl;
      }
      answer+=max(one,zero);


      cout<<answer<<endl;
      
  }



  int main()
  {
      speed;
      wh(t)
       {solve();}
      
      return 0;
  }
