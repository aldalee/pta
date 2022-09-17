/**
 * Created by lhy on 2021/4/8 23:30
 * Description: 1076 Wifi密码
 * 学习这种新的解体思路
 */
#include <iostream>
using namespace std;
int main(){
    string s;
    while (cin >> s)
        if (s.size() == 3 && s[2] == 'T')
            cout << s[0]-'A'+1;
    return 0;
}