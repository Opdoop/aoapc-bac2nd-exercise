#include<iostream>
#include<vector>
#include<cstring>
#include<sstream>
#include<algorithm>
using namespace std;

int main() {
	vector<string> line_word[1005];// [i][j] is the ith line jth word;
	int position_len[100];
	memset(position_len, 0, sizeof(position_len));
	string line;
	int row = 0;
	while (getline(cin, line)) {
		string word;
		stringstream ss(line);
		int position_curr = 0;
		while (ss >> word) {
			int word_len = word.length();
			line_word[row].push_back(word);// store all lines
			position_len[position_curr++] = max(word_len, position_len[position_curr]);
		}
		row++;
	}
	for (int i = 0; i < row; i++) {
		int j = 0;
		for (; j < line_word[i].size() - 1; j++) {
			string word = line_word[i][j];
			int curr_len = position_len[j];
			int word_len = word.size();
			int white_blank_nbr = curr_len - word_len;
			cout << word << " ";
			while (white_blank_nbr != 0 && white_blank_nbr--)
				cout << " ";
		}
		cout << line_word[i][j] << "\n";
	}
}