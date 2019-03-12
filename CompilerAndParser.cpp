#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t,len,i;
	cin>>t;
	string s;
	while(t--)
	{
		cin>>s;
		len = s.size();
		stack<int> st;
		for(i=0;i<len;i++)
		{
			if(s[i]=='<')
                st.push(i);
			else
			{
				if(!st.empty()&&s[st.top()]=='<')
				st.pop();
				else
				{
					st.push(i);
					break;
				}
			}
		}
		while(!st.empty()) {
			i = st.top();
			st.pop();
		}
		cout<<i<<endl;
	}
}
