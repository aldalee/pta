/**
 * Created by lhy on 2021/4/4 11:34
 * Description: 1016 部分A+B
 */
#include <iostream>
#include <cmath>
using namespace std;
int getNum(int x,int n){
    int sum = 0;
    while (n >= 1){
        sum += x * pow(10,n-1);
        --n;
    }
    return sum;
}
int main(){
    string A,B;
    int Da,Db;
    int a = 0,b = 0;
    int sum = 0;
    cin >> A >> Da >> B >> Db;
    for (auto ch : A) {
       if (ch - '0' == Da)
           ++a;
    }
    for (auto ch : B) {
        if (ch - '0' == Db)
            ++b;
    }
    sum = getNum(Da,a) + getNum(Db,b);
    cout << sum;
    return 0;
}