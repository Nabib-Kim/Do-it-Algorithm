#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ans = 1;
	int N;
	cin >> N;

	int start_index = 1;
	int end_index = 1;
	int sum = 1;
	while (end_index != N) {
		if (sum == N) {
			ans++;
			end_index++;
			sum += end_index;
		}
		else if (sum < N) {
			end_index++;
			sum += end_index;
		}
		else {
			sum -= start_index;
			start_index++;
		}
	}
	cout << ans;
}
