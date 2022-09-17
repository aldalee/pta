/**
 * Created by lhy on 2021/4/5 14:36
 * Description: 1063 计算谱半径
 */
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int a,b;
    float model = 0,maxModel = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        model = sqrt(a*a+b*b);
        if (model > maxModel)
            maxModel = model;
    }
    printf("%.2f",maxModel);    // 保留2位小数，四舍五入
    return 0;
}
