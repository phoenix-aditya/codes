// Concept is simple just trim all zeros from both ends of the list then simply count the remaining zeros and it will be the answer

#include<bits/stdc++.h>
using namespace std;




void solve()
{
	int n,x;
	cin >> n;
	list<int> my_list;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		my_list.push_back(x);
	}
	// Trim from end of the list
	while( my_list.back() == 0 )
		my_list.pop_back();
	//Trim from begining of the list
	while ( my_list.front() == 0 )
		my_list.pop_front();
	// Printing the remaining Zeros
	cout << count(my_list.begin(),my_list.end(),0) << "\n";
	my_list.clear();
}

int main()
{
	int tc;
	cin >> tc;
	while(tc--) solve();
	return 0;
}
