#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int n;

	// n (1 <= n < 10^3).
	cout << "Testlar soni: "; cin >> n;
	string in = "",out = "";
	for (int i = 1; i <= n; ++i)
	{
		if (i < 10)
		{
			in = "00" + str(i) + ".in";
			out = "00" + str(i) + ".out";
		}
		else if (i < 100)
		{
			in = "0" + str(i) + ".in";
			out = "0" + str(i) + ".out";
		}
		else{
			in = str(i) + ".in";
			out = str(i) + ".out";
		}

		ofstream inp(in,"w");
		ofstream out(out,"w");

		inp << "input";
		cout << "output";

	}
	return 0;
}