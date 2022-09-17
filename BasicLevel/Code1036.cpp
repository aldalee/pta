/**
 * Created by lhy on 2021/4/7 21:30
 * Description: 1036 跟奥巴马一起编程
 */
#include <iostream>
#include <cmath>

using namespace std;
int main(){
    double n;
    char c;
    cin >> n >> c;
    for (int i = 0; i < n; ++i) {
        cout << c;
    }
    cout << endl;
    for (int i = 1; i < round(n/2)-1; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j ==0 || j==n-1)
                cout << c;
            else
                cout <<" ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; ++i) {
        cout << c;
    }
    return 0;
}

