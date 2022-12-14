#include <iostream>
#include <vector>
#include <cstring>

using std::string;

int main() {
    int n, h;
    std::cin >> n >> h;
    std::vector<string> alturas (n);
    
    for(int i=0; i<n; i++){ 
		std::cin >> alturas[i];
	}

    int ancho = 0;
    for(int i=0; i<n; i++){ 
		if (alturas[i] <= h) {
            ancho += 1;
        }
        else {
            ancho += 2
        }
	}

    std::cout << ancho;

    return 0;
}