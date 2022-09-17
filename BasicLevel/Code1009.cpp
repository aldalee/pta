/**
 * Created by lhy on 2021/4/3 10:37
 * Description:
 */
#include <iostream>
#include <stack>
using namespace std;
int main(){
    string word;
    stack<string> stack;
    while (cin >> word){
        stack.push(word);
        if (cin.get() == '\n')
            break;
    }
    while(!stack.empty()){
        cout << stack.top();
        if (stack.size() > 1)
            cout << " ";
        stack.pop();
    }
    return 0;
}

