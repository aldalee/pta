// https://pintia.cn/problem-sets/14/exam/problems/743
#include <iostream>

using namespace std;

#define MAXN 10
typedef float ElementType;

ElementType Median(ElementType A[], int N);

void merge(ElementType arr[], int L, int M, int R) {
    ElementType help[R - L + 1];
    int i = 0;
    int p1 = L;
    int p2 = M + 1;
    while (p1 <= M && p2 <= R) {
        help[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
    }
    // 要么p1越界，要么p2越界
    while (p1 <= M) {
        help[i++] = arr[p1++];
    }
    while (p2 <= R) {
        help[i++] = arr[p2++];
    }
    // copy help[] to arr[]
    for (i = 0; i < R - L + 1; i++) {
        arr[L + i] = help[i];
    }
}

void sort(ElementType arr[], int L, int R) {
    if (L == R) {    // base case
        return;
    }
    int M = ((R - L) >> 1) + L;
    sort(arr, L, M);
    sort(arr, M + 1, R);
    merge(arr, L, M, R);
}

ElementType Median(ElementType A[], int N) {
    sort(A, 0, N - 1);
    if (N % 2 != 0)
        return A[N / 2];
    return A[(N + 1) / 2];
}

int main() {
    ElementType A[MAXN];
    int N, i;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        scanf("%f", &A[i]);
    printf("%.2f\n", Median(A, N));
    return 0;
}