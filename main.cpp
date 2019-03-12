#include <bits/stdc++.h>

using namespace std;

int main()
{
    queue<int> q;
    int num;
    cin >> num;
    while(1)
    {
        if(num == 0) break;
        if(num != 0)
        {
            for(int i = 0; i < num; i++)
            {
                q = queue<int>();
                q.push(i+1);
            }
            cout << "Discarded cards: ";

            while(q.size() > 1)
            {
                cout << q.front();
                q.pop();
                int x = q.front();
                q.pop();
                if(!q.empty())
                {
                    cout << ", ";
                }
                q.push(x);
            }
         cout << endl;
         cout << "Remaining card: " << q.front() << endl;

        }
    }
}
