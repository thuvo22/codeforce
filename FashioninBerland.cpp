#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> arr;
    cin >> n;
    int num;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    if(n == 1)
    {
        if(arr[0] == 0)
            cout << "NO";
        else
            cout << "YES";
        return 0;

    }else if(n > 1){
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                count++;
            }
        }

    }
    if(count == 1)
    {
        cout << "YES";
    }else{
        cout << "NO";
    }
}
