#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int count = 0;
	int N, M;
	cin >> N >> M;
	vector<int> resources(N);
	for (int i = 0; i < N; i++) {
		cin >> resources[i];
	}
	sort(resources.begin(), resources.end());

	int start_index = 0;
	int end_index = N-1;
	while (start_index < end_index) {
		int sum = resources[start_index] + resources[end_index];
		if (sum == M) {
			count++;
			start_index++;
			end_index--;
		}
		else if (sum < M) {
			start_index++;
		}
		else {
			end_index--;
		}
	}
	cout << count;
}
