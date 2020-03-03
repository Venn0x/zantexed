#include <iostream>
#include <fstream>

int main() {
    std::ifstream input("eratostene.in");
    std::ofstream output("eratostene.out");
	int n = 0, cnt = 0;
	input>>n;
    const int nume = n;
	int v[nume] = { 0 };
	v[0] = 1;
	v[1] = 1;
	for (int a = 2; a <= n; a++) {
		if (v[a] == 0) {
			for (int b = 2; a * b < n; b++) v[a * b] = 1;
		}
	}
	for (int a = 0; a <= n; a++) {
		if (v[a] == 0) 
            cnt++;
	}
    output<<cnt;

	return 0;
}
