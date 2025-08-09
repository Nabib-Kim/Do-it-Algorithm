#include <iostream>
#include <vector>
#include <stack>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	deque<int> card;
	for (int i = N; i >= 1; i--) {
		card.push_back(i);
	}
	
	while (card.size() != 1) {
		card.pop_back();
		int temp = card.back();
		card.pop_back();
		card.push_front(temp);
	}
	cout << card.back();
}
