#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	while (cin >> n, n != 0) {
		vector<int> original(n), target(n);
		for (int i = 0; i < n; i++) {
			cin >> original[i] >> target[i];
		}
		sort(original.begin(), original.end());
		sort(target.begin(), target.end());
		if (original == target)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

/* WA, but don't know where is wrong.
#include<iostream>
#include<set>
using namespace std;
struct student {
int from;
int to;
};
bool operator<(const student &a, const student &b) {
return a.from < b.from;
}
int main() {
int n;
while (cin >> n && n) {
set<student> student_pool;
while (n--) {
student s;
cin >> s.from >> s.to;
if (s.from == s.to) {
student_pool.insert(s);
continue;
}
if (!student_pool.empty()) {
student temp;
temp.from = s.to;
temp.to = s.from;
if (student_pool.find(temp) != student_pool.end()) {//find a match student
student_pool.erase(temp);
}
}
else {
student_pool.insert(s);
}
}
if (student_pool.empty()) {
cout << "YES" << endl;
}
else {
cout << "NO" << endl;
}
}
return 0;
}
*/