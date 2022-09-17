/**
 * Created by lhy on 2021/4/4 17:09
 * Description: 1023 组个最小数
 */
#include <iostream>
#include <vector>
using namespace std;

/*快速排序*/
void quickSort(vector<int> arr,int low,int high){
    int temp;
    int i = low,j = high;
    if (low < high){
        temp = arr[low];
        while (i < j){
            while (j > i && arr[j] >= temp)
                --j;
            if (i < j)
                arr[i++] = arr[j];
            while (i < j && arr[i] < temp)
                ++i;
            if (i < j)
                arr[j--] = arr[i];
        }
        arr[i] = temp;
        quickSort(arr,low,i-1);
        quickSort(arr,i+1,high);
    }
}

int main(){
    int num,n = 0;
    vector<int> arr;
    int index = 0;
    int temp = 0;
    for (int i = 0; i < 10; ++i){
        cin >> num;
        n += num;
        for (int j = 0; j < num; ++j) {
            arr.push_back(i);
        }
    }
    // 排序 升序
    quickSort(arr,0,n);
    if (arr[0] == 0){
        while (arr[index] == 0){
            ++index;
        }
        temp = arr[0];
        arr[0] = arr[index];
        arr[index] = temp;
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i];
    }
    return 0;
}
