/**
 * Created by lhy on 2021/4/3 13:58
 * Description: 1037 在霍格沃茨找零钱
 */
#include <iostream>
using namespace std;

int main(){
    int g1,s1,k1,sum1;   // 应付的钱
    int g2,s2,k2,sum2;   // 实付的钱
    int g,s,k,sum;      // 应找的钱
    bool flag = true;   // flag 为true，代表 实付的钱 ＞=  应付的钱 ；为false，代表 实付的钱 ＜  应付的钱
    scanf("%d.%d.%d",&g1,&s1,&k1);
    getchar();
    scanf("%d.%d.%d",&g2,&s2,&k2);
    // 转换成最小单位进行计算
    sum1 = (g1*17 + s1)*29 + k1;
    sum2 = (g2*17 + s2)*29 + k2;
    sum = sum1 - sum2;
    if (sum > 0)
        flag = false;
    // 还原成相应的数值
    g = sum / 29 /17;
    s = sum / 29 - g*17;
    k = sum - (g*17+s)*29;
    if (!flag)
        cout<< "-";
    cout << abs(g) << "." << abs(s) << "." << abs(k);
    return 0;
}