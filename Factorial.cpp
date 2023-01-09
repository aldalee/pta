// https://pintia.cn/problem-sets/14/exam/problems/742
#include <iostream>

using namespace std;

void Print_Factorial(const int N) {
    if (N < 0 || N > 1000) {
        printf("Invalid input");
        return;
    }
    int arr[3000] = {};
    arr[0] = 1;
    int size = 1;       //阶乘结果的实际长度
    int factor = 2;
    while (factor <= N) {
        int carry = 0;  //进位
        int multiply;   //每位乘法的结果
        for (int i = 0; i < size; ++i) {
            multiply = arr[i] * factor;
            arr[i] = (multiply + carry) % 10;
            carry = (multiply + carry) / 10;
            if (i >= size - 1 && carry > 0) {
                size++;
            }
        }
        factor++;
    }
    for (int i = size - 1; i >= 0; --i) {
        printf("%d", arr[i]);
    }
}

int main() {
    Print_Factorial(15);
    return 0;
}




