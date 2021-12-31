#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {
    string userString;

    cin >> userString;
    cout << "Input an abbreviation: " << endl;

    if (userString == "LOL"){
        cout << "laughing out loud" << endl;
    }
    if(userString == "IDK"){
        cout << "I don't know";
    }
    else if(userString == "IMHO"){
        cout << "in my humble opinion";
    }
    else if(userString == "TMI"){
        cout << "too much information";
    }
    else {
        cout << "Unknown.";
    }

    cout << endl;
    return 0;
}