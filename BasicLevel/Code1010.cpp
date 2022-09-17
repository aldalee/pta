#include <iostream>
/**
 * 代码来自网站 还是有问题，待修改
 */
using namespace std;
int main() {
    int n,e;    //系数 指数
    cin >> n >> e;
    if (abs(e) > 1000)
        return 0;
    if (e == 0){
        cout << "0 0";
        return 0;
    } else
        if (e!=0)
            cout << n*e << " " << e-1;
    while (cin >> n >> e){
        if (abs(e) > 1000)
            return 0;
        if (e == 0)
            return 0;
        else if (n==0 && e==0){
            cout << "0 0";
            return 0;
        } else if (e != 0)
            cout << " " << n*e << " " << e-1;
    }
    return 0;
}
