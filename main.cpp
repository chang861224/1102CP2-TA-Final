#include <iostream>
#include "src/message.h"
using namespace std;

int main(){
    string stud_id;

    cout << "你的學號：";
    cin >> stud_id;

    message(stud_id);
    return 0;
}

