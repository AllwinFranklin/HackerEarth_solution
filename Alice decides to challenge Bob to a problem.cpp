#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		set<string> st;
		st.emplace(s);
		if (s.length() < 3)
		{
			cout << "Not possible" << endl;
			continue;
		}
		for (int i = 0; i < (s.length() * s.length())- s.length()-1; i++)
		{
			swap(s[i % s.length()], s[(i + 1) % s.length()]);
			st.emplace(s);
		}
		set<string>::iterator it,it1;
		it = st.begin();
		it1 = st.begin();
		advance(it, 2);
		advance(it1, st.size()-3);
		cout << *it << " " << *it1 << endl;
	}
	return 0;
}
