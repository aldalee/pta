/**
 * Created by lhy on 2021/4/4 20:33
 * Description: 1047 编程团体赛
 */
#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int teamSumScore[1001] = {0};   // 队伍编号为 1 到 1000 的正整数，teamSumScore[]保存每个队伍的总分
    int maxTeam = 0, maxScore = 0;
    int team = 0, member = 0, score = 0;
    for (int i = 0; i < N; ++i) {
        scanf("%d-%d %d",&team,&member,&score);
        teamSumScore[team] += score;
        if (teamSumScore[team] > maxScore){
            maxTeam = team;
            maxScore = teamSumScore[team];
        }
    }
    cout << maxTeam << " " << maxScore;
    return 0;
}
