/**
 * Created by lhy on 2021/4/5 13:57
 * Description: 1043 输出PATest
 */
#include <iostream>
using namespace std;
int main(){
    string str;
    int num[6] = {0};
    char ch[6] = {'P','A','T','e','s','t'};
    int max = 0;
    cin >> str;
    for (auto i : str){
        if (i == 'P')
            num[0] += 1;
        else if (i == 'A')
            num[1] += 1;
        else if (i == 'T')
            num[2] += 1;
        else if (i == 'e')
            num[3] += 1;
        else if (i == 's')
            num[4] += 1;
        else if (i == 't')
            num[5] += 1;
    }
    for (int i : num) {
        if (i > max)
            max = i;
    }
    for (int i = 0; i < max; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (num[j] > 0){
                cout << ch[j];
                num[j] -= 1;
            }
        }
    }
    return 0;
}