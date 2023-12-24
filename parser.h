#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
using namespace std;

map<string,string> parse(const string &filename) {
	map<string,string> config;
	ifstream file(filename);
	if (!file.is_open()) {
		cerr << "Error in opening of config file" << "\n";
		return {};
	}
	string line,section;
	while (getline(file,line)) {
		if (line.find('[') != string::npos && line.find(']') != string::npos) {
			section = line.substr(line.find('[')+1,line.find(']')-line.find('['));
			continue;
		}
		stringstream ss(line);
		string key,value;
		getline(ss,key,'=');
		getline(ss,value);
		config[key] = value;
	}
	return config;
}

