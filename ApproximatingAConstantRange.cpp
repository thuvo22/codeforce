#include<bits/stdc++.h>
using namespace std;
/*
5
1 2 3 3 2
*/
int a[100000],num,ans;
int main()
{
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> num;
		a[num]++;      //a[1] = 1 //a[2] = 2  //a[3] = 2; //a[3] = 3  //a[2] = 1
		a[num + 1]++;  //a[2] = 1 //a[3] = 1  //a[4] = 1  //a[4] = 2  //a[3] = 4

		a[num - 1] = 0;//a[0] = 0 //a[1] = 0  //a[2] = 0  //a[2] = 0  //a[1] = 0
		cout << a[num - 1] << endl;
		a[num + 2] = 0;//a[3] = 0 //a[4] = 0  //a[5] = 0  //a[5] = 0  //a[4] = 0
		ans = max(max(ans, a[num]), a[num+1]); //ans = 1 //ans = 2 //ans = 2 //ans = 3 //ans = 3
	}
	cout << ans << endl;
}
