#include "message.h"

void message(string _id){
    map<string, string> course_list = getCourseList();

    if(course_list.find(_id) == course_list.end()){
        cout << "沒這人" << endl;
        exit(1);
    }
    else{
        cout << "--\n\n嗨 " << course_list[_id] << "\n" << endl;
    }

    ifstream f("./doc/." + transfer(_id));

    if(f.is_open()){
        string load_str;

        while(f >> load_str){
            cout << load_str << endl;
            cout << endl;
        }

        f.close();
    }
    else{
        f.open("./doc/.64CE6612829");
        string load_str;

        while(f >> load_str){
            cout << load_str << endl;
            cout << endl;
        }

        f.close();
    }

    cout << "助教 麒竑" << endl;
    cout << "2022.06.02" << endl;
    cout << endl;
}

map<string, string> getCourseList(){
    string stud_id, name;
    map<string, string> course_list;
    string _id;

    ifstream f("./doc/course_list.txt");

    while(f >> stud_id >> name){
        course_list[stud_id] = name;
    }

    f.close();
    return course_list;
}

