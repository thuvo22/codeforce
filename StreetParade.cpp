#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if(n == 0) break;
        int c = 1, check = 1, t = 0;
        stack<int> stk;
        for(int i = 0; i < n; i++)
        {
            cin >> t;
            if(t == c)
            {
                c++;
            }
            else
            {
                while(stk.size() > 0 && stk.top() == c)
                {
                    stk.pop();
                    c++;
                }
                stk.push(t);
            }
        }
        while(stk.size() > 0)
        {
            if(stk.top()!= c)
            {
                check = 0;
                break;
            }
            else
            {
                c++;
            }
            stk.pop();
        }
        if(check == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
