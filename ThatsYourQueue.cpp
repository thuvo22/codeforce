#include <bits/stdc++.h>

using namespace std;

int main()
{
    int p, c;
    queue<int> q, q1;
    while(1){
        cin >> p >> c;
        if(p == 0 && c == 0) break;
        for(int i = 1; i <= min(p,c); i++)
        {
            q.push(i);
        }
        for(int i = 1; i <= c; i++)
        {
            char ch;
            cin >> ch;
            if(ch == 'N')
            {
                int x = q.front();
                q.pop();
                q.push(x);
                cout << x << endl;
            }else{
                int num;
                cin >> num;
                q1.push(num);
                while(!q.empty())
                {
                    if(q.front() != num)
                    {
                        q1.push(q.front());
                    }
                    q.pop();
                }


                while(!q1.empty())
                {
                    q.push(q1.front());
                    q1.pop();
                }
                 swap(q, q1);
            }
        }
    }
    return 0;
}

