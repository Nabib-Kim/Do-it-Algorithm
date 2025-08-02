#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
typedef pair<int, int> Node;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;
	cin >> N >> L;
	
	deque<Node> A;
	for (int i = 0; i < N; i++) {
		int now;
		cin >> now;
		
		while (A.size() && A.back().first > now)
			A.pop_back();
		A.push_back(Node(now, i));
		if (A.front().second <= i - L)
			A.pop_front();

		cout << A.front().first << " ";
	}
}
