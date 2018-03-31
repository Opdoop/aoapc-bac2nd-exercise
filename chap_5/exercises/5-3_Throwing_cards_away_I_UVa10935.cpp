#include<iostream>
#include<queue>
using namespace std;

int main() {
	int n;
	while (cin >> n && n != 0) {
		if (n == 1) {//special case that the question didn't mentioned.
			cout << "Discarded cards:" << endl;
			cout << "Remaining card: " << 1 << endl;
			continue;
		}
		queue<int> start_queue;
		for (int i = 1; i <= n; i++)
			start_queue.push(i);
		queue<int> throw_queue;
		while (start_queue.size() >= 2) {
			int to_throw = start_queue.front();
			start_queue.pop();
			throw_queue.push(to_throw);

			int move_to_end = start_queue.front();
			start_queue.pop();
			start_queue.push(move_to_end);
		}
		cout << "Discarded cards: " << throw_queue.front();
		throw_queue.pop();
		while (!throw_queue.empty()) {
			cout << ", " << throw_queue.front();
			throw_queue.pop();
		}
		cout << endl;
		cout << "Remaining card: " << start_queue.front() << endl;
	}
	return 0;
}