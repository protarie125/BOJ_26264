#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	string s;
	cin >> s;

	const auto& len = s.length();

	auto bi = int{ 0 };
	auto se = int{ 0 };
	for (auto i = 0; i < len && 0 < n; ++i) {
		if ('b' == s[i]) {
			++bi;
			--n;
		}
		else if ('s' == s[i]) {
			++se;
			--n;
		}
	}

	if (bi < se) {
		cout << "security!";
	}
	else if (se < bi) {
		cout << "bigdata?";
	}
	else {
		cout << "bigdata? security!";
	}

	return 0;
}