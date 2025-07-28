#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long ans = 0;
	int N, M;
	cin >> N >> M;
	vector<long> S(N + 1);
    vector<long> remain(M);
	for (int i = 1; i <= N; i++)
	{
		int temp;
        int rest;
		cin >> temp;
		S[i] = temp + S[i - 1];
		rest = S[i] % M;
		if (rest == 0)
		{
			ans += 1;
		}
        remain[rest] += 1;
	}
    
    for (int i=0; i<M; i++){
        if (remain[i] > 1){
            ans += remain[i]*(remain[i]-1)/2;
        }
    }
    
    cout << ans;
	return 0;
}
