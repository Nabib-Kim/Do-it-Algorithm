#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    float score[1000];
    cin >> N;
    float max_score = 0;
    for (int i = 0; i < N; i++) {
        cin >> score[i];
        if (score[i] > max_score) {
            max_score = score[i];
        }
    }
    float average_sum = 0;
    for (int i = 0; i < N; i++) {
        score[i] = score[i] / max_score * 100;
        average_sum += score[i];
    }
    cout << average_sum / N;
}
