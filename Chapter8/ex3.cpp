#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string& str_to_up(string &);

int main(){
    string str_test;
    cout << "Enter a string (q to quit): ";
    cin >> str_test;
    while (str_test != "q"){
        str_test = str_to_up(str_test);
        for (int i=0; str_test[i]!='\0';i++){
            cout << str_test[i];
        }
        cout << "\nNext string: ";
        cin >> str_test;
    }
    cout << "Bye.\n";
}

string& str_to_up(string& str){
    for (int i = 0; str[i] != '\0' ; ++i) {
        str[i] = toupper(str[i]);
    }
    return str;
}