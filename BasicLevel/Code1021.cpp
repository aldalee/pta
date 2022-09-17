/**
 * Created by lhy on 2021/4/6 18:55
 * Description: 1021 个位数统计
 */
#include <iostream>
using namespace std;
int main(){
    string str;
    int num[10] = {0};
    cin >> str;
    for (auto i : str){
        num[i-'0'] += 1;
    }
    for (int i = 0; i < 10; ++i) {
        if (num[i] != 0)
            cout << i << ":" << num[i] << endl;
    }
    return 0;
}

