#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	vector<vector<int>> graph(N + 1, vector<int>(N + 1));
	vector<vector<int>> S(N + 1, vector<int>(N + 1));
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> graph[i][j];
			S[i][j] = graph[i][j] + S[i][j - 1] + S[i - 1][j] - S[i - 1][j - 1];
		}
	}

	for (int i = 0; i < M; i++)
	{
		int ans;
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		ans = S[x2][y2] - S[x1 - 1][y2] - S[x2][y1 - 1] + S[x1 - 1][y1 - 1];
		cout << ans << "\n";
	}

	return 0;
}
