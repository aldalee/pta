/**
 * Created by lhy on 2021/4/7 21:58
 * Description: 1041 考试座位号
 */
#include <iostream>
using namespace std;
/*准考证号 试机座位号 考试座位号*/
struct student{
    string admissionNumber;
    int computerNumber{};
    int seatNumber{};
};
int main(){
    int N;
    int M;
    cin >> N;
    student s[N];
    for (int i = 0; i < N; ++i) {
        cin >> s[i].admissionNumber >> s[i].computerNumber >> s[i].seatNumber;
    }
    cin >> M;
    int search;
    for (int i = 0; i < M; ++i) {
        cin >> search;
        for (int j = 0; j < N; ++j) {
            if (search == s[j].computerNumber){
                cout << s[j].admissionNumber << " " << s[j].seatNumber;
                cout <<endl;
                break;
            }
        }
    }
    return 0;
}
