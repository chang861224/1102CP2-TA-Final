#include "encode.h"

string transfer(string stud_id){
    char* s = new char[stud_id.length() + 1];
    strcpy(s, stud_id.c_str());
    int n = atoi(s);

    string str = dec2hex(n);
    str += dec2hex(sqrt(n));
    return str;
}

string dec2hex(int num){
    string str = "";
    char* c = new char[2];

    for(int i = 0 ; i < 2 ; i++){
        c[i] = '\0';
    }

    while(num != 0){
        int r = num % 16;
        num /= 16;
        
        if(r == 10){
            str += "A";
        }
        else if(r == 11){
            str += "B";
        }
        else if(r == 12){
            str += "C";
        }
        else if(r == 13){
            str += "D";
        }
        else if(r == 14){
            str += "E";
        }
        else if(r == 15){
            str += "F";
        }
        else{
            c[0] = r + 48;
            string s(c);
            str += s;
        }
    }

    free(c);

    return string(str.rbegin(), str.rend());
}

