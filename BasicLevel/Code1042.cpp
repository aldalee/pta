/**
 * Created by lhy on 2021/4/6 22:19
 * Description: 1042 字符统计
 */
#include <iostream>
using namespace std;
int main(){
    int ASCII[26] = {0};    // 存储的是从a-z字母出现的次数，下标可以映射成相应字母对应的ASCII
    string str;
    int ascii,max = 0;
    int chIndex = 0;
    getline(cin,str);
    if (str.size() > 1000)
        return 0;
    for (char i : str){
        ascii = int(towlower(i));
       if (ascii >= 97 && ascii <= 122)
            ASCII[ascii-97] += 1;
    }
//    for (int i = 0; i < 26; ++i) {
//        cout << char(i+97)<<":"<< ASCII[i] << endl;
//    }
    for (int i=0; i<26; ++i) {
        if (ASCII[i] > max){
            max = ASCII[i];
            chIndex = i;
        }
    }
    cout << char(chIndex+97) << " " << max ;
    return 0;
}
