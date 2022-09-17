/**
 * Created by lhy on 2021/4/3 15:33
 * Description: 1061 判断题
 */
#include <iostream>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;
    int weight[M];
    int sign[M];
    int student;
    int score = 0;
    for (int i = 0; i < M; ++i) {
        cin >> weight[i];
    }
    for (int i = 0; i < M; ++i) {
        cin >> sign[i];
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> student;
            if (student == sign[j])
                score += weight[j];
        }
        cout << score << endl;
        score = 0;
    }
    return 0;
}
