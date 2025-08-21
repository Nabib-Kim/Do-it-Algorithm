#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string N;
	cin >> N;
	vector<int> A(N.size(), 0);
	for (int i = 0; i < N.size(); i++)
		A[i] = stoi(N.substr(i, 1));

	for (int i = 0; i < N.length(); i++) {
		int Max = i;
		for (int j = i + 1; j < N.length(); j++) {
			if (A[j] > A[Max])
				Max = j;
		}
		if (A[i] < A[Max]) {
			int temp = A[i];
			A[i] = A[Max];
			A[Max] = temp;
		}
	}
	for (int i = 0; i < A.size(); i++)
		cout << A[i];
}
