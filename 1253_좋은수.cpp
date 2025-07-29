#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ans = 0;
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end());
	
	for (int k = 0; k < N; k++) {
		long find = A[k];
		int i = 0;
		int j = N - 1;
		
		while (i < j) {
			if (A[k] == A[i] + A[j]) {
				if (i != k and j != k) {
					ans++;
					break;
				}
                else if(i==k){
                    i++;
                }
				else if(j==k){
                    j--;
                }
			}
			else if (A[k] > A[i] + A[j]) {
				i++;
			}
			else {
				j--;
			}
		}
	}

	cout << ans;
}
