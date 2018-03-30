#include<iostream>
#include<vector>
#include<set>
#include<cstring>
#include<sstream>
#include<cmath>


using namespace std;

const int max_loop = 1000;

int main() {
	int Kase;
	cin >> Kase;
	while (Kase--) {
		int nbr;
		vector<int> array;
		cin >> nbr;
		//read number to array
		while (nbr--) {
			int t;
			cin >> t;
			array.push_back(t);
		}
		//test if it's zero or loop
		set<string> dic;
		for (int i = 0; i < max_loop; i++) {
			// add current array to set
			string temp;
			int array_size = array.size();
			for (int j = 0; j < array_size; j++) {
				temp = temp + to_string(array[j]) + " ";
			}
			//cout << temp << endl;

			set<string>::iterator it;
			it = dic.find(temp);
			if (it == dic.end()) {
				dic.insert(temp);
			}
			else {// if find the temp
				cout << "LOOP\n";
				break;
			}
			//update array number using Ducci calculate rule
			bool All_zero = true;
			vector<int> temp_array;
			for (int j = 0; j < array_size; j++) {
				//cout << "i:" << array[j] << "   j:" << (j + 1) % array_size << endl;
				int temp_abs = abs(array[j] - array[(j + 1) % array_size]);
				temp_array.push_back(temp_abs);
				if (temp_abs != 0)
					All_zero = false;
			}
			if (All_zero) {
				cout << "ZERO\n";
				break;
			}
			array = temp_array;
		}
	}
}