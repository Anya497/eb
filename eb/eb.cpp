#include <iostream>
#include <math.h>

void handshakes(int p) {
	int i, k = p, n = 0;
	for (i = 1; i <= k; i++) {
		p = p - 1;
		n += p;
	}
	std::cout << n << std::endl;
}
 
int main() {
	int N;
	std::cout << "N = ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		int p;
		std::cout << "p = ";
		std::cin >> p;
		handshakes(p);
	}
}