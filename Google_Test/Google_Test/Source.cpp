#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

vector<string> fileParser(string filename) {
	string word;
	vector<string> words;
	ifstream file;
	file.open(filename);
	if (file.is_open())
	{
		while (file >> word)
		{
			words.push_back(word);
			cout << word << " ";
		}
		file.close();
	}

	else cout << "Unable to open file";
	return words;
}


int main() {

	fileParser("text.txt");
	cin.get();
	return 0;
}