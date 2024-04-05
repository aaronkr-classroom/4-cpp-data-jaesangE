#include <iostream>
#include <vector>
#include <unordered_map>

using std::cin; using std::cout; using std::endl;

using namespace std;

int main() {

	vector<string> words;
	unordered_map<string, int> wordCount;

	cout << "Enter words(CTRL+Z to stop) " << endl;
	//1.Read words (cin)
	string word;
	while (cin >> word) {
		words.push_back(word);
	}
	//2.Count words(for)
	for (auto& w : words) {// for(x in vector)
		wordCount[w]++;
	}
	//3.Print results
	cout << "Word count : " << endl;
	for (auto& pair : wordCount) {
		cout << pair.first << ": " << pair.second << endl;
	}



	return 0;
}