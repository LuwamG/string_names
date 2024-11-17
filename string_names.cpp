#include <string>
#include "string_names.hpp"
using namespace std;

string name;
// function to print first and second names separately
void string_name(string& first_name, string& last_name) {
	cout << "Enter your full name: ";
	getline(cin, name);
    size_t space_pos = name.find(' ');

    
    if (space_pos != string::npos) {
        first_name = name.substr(0, space_pos); 
        last_name = name.substr(space_pos + 1); 
    }
    else {
        first_name = name; 
        last_name = "";
    }
		cout << "First name: " << first_name << endl;
		cout << "Last name: " << last_name << endl;
	}
