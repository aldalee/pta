#include <iostream>

using namespace std;

#define MAXSIZE 50
typedef int KeyType;

typedef struct {
    KeyType key;
} ElemType;

typedef struct {
    ElemType *R;
    int length;
} SSTable;

void Create(SSTable &T) {
    int i;
    T.R = new ElemType[MAXSIZE + 1];
    cin >> T.length;
    for (i = 1; i <= T.length; i++)
        cin >> T.R[i].key;
}

int Search_Bin(SSTable T, KeyType k);

int main() {
    SSTable T;
    KeyType k;
    Create(T);
    cin >> k;
    int pos = Search_Bin(T, k);
    if (pos == 0) cout << "NOT FOUND" << endl;
    else cout << pos << endl;
    return 0;
}

/* 请在这里填写答案 */
int Search_Bin(SSTable T, KeyType k) {
    int L = 0, R = T.length - 1;
    while (L <= R) {
        int M = (R - L) / 2 + L;
        if (T.R[M].key == k)
            return M;
        else if (T.R[M].key > k)
            R = M - 1;
        else
            L = M + 1;
    }
    return 0;
}
