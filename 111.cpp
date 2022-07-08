#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int comp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else
		return a.length() < b.length();
}

int main() {
	int N;
    vector<string> s;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		if (find(s.begin(), s.end(), str) == s.end())
			s.push_back(str);
	}
	sort(s.begin(), s.end(), comp);
	for (int i = 0; i < N; i++) {
		cout << s[i] << '\n';
	}
}
