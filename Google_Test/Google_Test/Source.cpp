#include "Header.h"

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

vector<string> nearestVowel(vector<string> words) {
	char nearestVowels[27] = "aaaeeeeiiiiioooooouuuuuyyy";
	vector<string> vowels = words;
	
	for (int i = 0; i < words.size(); i++) {
		for (int j = 0; j < words[i].length(); j++) {
			if (isalpha(words[i][j])){
				if (words[i][j] >= 'A' && words[i][j] <= 'Z') {
					vowels[i][j] = nearestVowels[words[i][j] - 'A'];
					cout << vowels[i][j];
				}
				else {
					vowels[i][j] = nearestVowels[words[i][j] - 'a'];
					cout << vowels[i][j];
				}
			}
			else  {
				
				vowels[i][j] = words[i][j];
				cout << vowels[i][j];
			}
		}
		cout << " ";
	}
	return vowels;
}

//fill out
vector<string> alphabatiseWords(vector<string> words) {
	return words;
}
//fill out
vector<string> orderLetters(vector<string> words) {
	return words;
}

int main() {

	vector<string> vs = fileParser("text.txt");
	nearestVowel(vs);
	cin.get();
	return 0;
}