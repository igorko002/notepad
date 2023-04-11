#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()
{
    string name;
    cout << "Write name file: ";
    cin >> name;
    cin.ignore();
    string nameFile = name + ".txt";
    ofstream fout;
    fout.open(nameFile);

    if (!fout.is_open()) {
        cout << "Error" << endl;
    }
    else {
        string text;
        cout << "Write text: " << endl;
        getline(cin, text);
        fout << text;
        fout.close();
    }
    string command = "start notepad.exe " + nameFile;
    system(command.c_str());
    return 0;
}