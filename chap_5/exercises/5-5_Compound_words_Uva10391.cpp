#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

const int maxn = 120005;
string dict[maxn];

bool is_compound_word(string t, int len) {
	// if using all word in dict to combine the test string, will get time limited exceeded
	// search potential front_substring and end_substring in the dict
	int char_len = t.size();
	for (int i = 1; i < t.size(); i++) {
		string fs = t.substr(0, i);
		string es = t.substr(i, char_len - 1);
		if (binary_search(&dict[0], &dict[len], fs) && binary_search(&dict[0], &dict[len], es))
			return true;
	}
	return false;
}


int main() {
	string t;
	int len = 0;
	while (cin >> t) {
		dict[len] = t;
		len++;
	}
	for (int i = 0; i < len; i++) {
		if (is_compound_word(dict[i], len))
			cout << dict[i] << endl;
	}
	return 0;
}