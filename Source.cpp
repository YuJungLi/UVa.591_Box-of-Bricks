#include <iostream>
#include <iomanip>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int cnt = 1;
	while (1)
	{
		int n, b[50], sum  = 0, move = 0;
		cin >> n;
		if (n == 0)
			break;
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			sum += b[i];
		}
		sum /= n;
		for (int i = 0; i < n; i++)
			if (b[i] > sum)
				move += b[i] - sum;
		cout << "Set #" << cnt << endl;
		cout << "The minimum number of moves is " << move << "." << endl << endl;
		cnt++;
	}
	return 0;
}
