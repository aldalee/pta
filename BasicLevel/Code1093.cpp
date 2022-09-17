/**
 * Created by lhy on 2021/4/8 22:30
 * Description: 1093 字符串A+B
 */
#include <iostream>
using namespace std;

int main(){
    string A,B;
    getline(cin,A);
    getline(cin,B);
    int isExist[95] = {0};
    int j;
    for (int i = 0; i < A.size(); ++i) {
        j = (int)A[i]-32;
        if (isExist[j] == 0){
            cout << A[i];
            isExist[j] = 1;
        }
    }
    for (int i = 0; i < B.size(); ++i) {
        j = (int)B[i]-32;
        if (isExist[j] == 0){
            cout << B[i];
            isExist[j] = 1;
        }
    }
    return 0;
}
