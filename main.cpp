#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream inFile;
    vector <string> students (20);
    inFile.open ("Students.txt");
    string classroom;

    cout << "hi" << endl;

    if (!inFile.is_open()){
        cout << "file did not open" << endl;
    }
    cout << "file is open" << endl;
        string first;
        string last;
        for (int i = 0; i < students.size(); i++) {
            getline(inFile, first, ',');
            getline(inFile, last, '\n');
            students.at(i) = first + " " + last;
           // cout << students.at(i) << endl;
            classroom = students.at(i);
            cout << classroom.at(0)<< " " << last << endl;
        }
     /*   for (string first: students){
            first = classroom.at(0);
        }

        for (int i = 0; i < students.size(); ++i) {
        cout << students.at(i) << endl;
        }*/


    return 0;
}