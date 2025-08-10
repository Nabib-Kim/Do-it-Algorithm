#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> number(N, 0);
	for (int i = 0; i < N; i++)
		cin >> number[i];

	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (number[j] > number[j+1]) {
				int temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
			}
		}
	}


	for (int i = 0; i < N; i++) {
		cout << number[i] << "\n";
	}
}
