#include "std_lib_facilities.h"

int main() {
	vector<string> words;
	vector<string> fun;
	for (string temp; cin >> temp;)
		words.push_back(temp);
	cout << "단어 개수: " << words.size()<<'\n';

	sort(words);

	for (int i = 0; i < words.size(); i++)
	{
		if(i==0||words[i-1]!=words[i])
			fun.push_back(words[i]);
	}

	for (string x : fun)
		cout << x << '\n';






}