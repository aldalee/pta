/**
 * Created by lhy on 2021/4/3 10:57
 * Description: 1008 数组元素循环右移问题
 */
#include <iostream>
using namespace std;
int main(){
    int N,M;
    cin >> N >> M;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int j = N - M%N;
    for (int i = j; i < N; ++i) {
        cout << arr[i] << " ";
    }
    for (int i = 0; i < j; ++i) {
        cout << arr[i];
        if (i != j-1)
            cout << " ";
    }
    return 0;
}
