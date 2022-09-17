/**
 * Created by lhy on 2021/4/4 21:59
 * Description: 1087 有多少不同的值
 */
#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int oldValue = 0,newValue=0;    // 由于 value = i/2 + i/3 + i/5 的结果是一个不减序列，因此只需比较邻近两个值的不同
    int sum = 1;
    int value = 0;
    for (int i = 1; i <= N; ++i) {
        value = i/2 + i/3 + i/5;
        newValue = value;
        if (newValue != oldValue)
            ++sum;
        oldValue = newValue;
    }
    cout << sum;
    return 0;
}

