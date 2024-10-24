#include <string>
#include "string_names.hpp"
using namespace std;

string name;

void string_name(string& first_name, string& last_name) {
	cout << "Enter your full name: ";
	getline(cin, name);
	for (int i = 0; i < name.length(); i++) {
		if (name[i] == ' ') {
			first_name = name.substr(0, i);
			last_name = name.substr(i, name.length() - 1);
		}
		else {
			first_name = name;
			last_name = ' ';
		}
		cout << "First name: " << first_name << endl;
		cout << "Last name: " << last_name << endl;
	}
}