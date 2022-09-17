/**
 * Created by lhy on 2021/4/6 19:28
 * Description: 1046 划拳
 */
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int A,a,B,b,sum;
    int numA = 0,numB = 0;
    for (int i = 0; i < n; ++i) {
        cin >> A >> a >> B >> b;
        sum = A + B;
        if (a == sum && b != sum)
            ++numB;
        else if ( a != sum && b == sum)
            ++numA;
    }
    cout << numA << " " << numB;
    return 0;
}
