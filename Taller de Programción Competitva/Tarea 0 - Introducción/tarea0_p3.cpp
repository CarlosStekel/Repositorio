#include <iostream>
#include <vector>
#include <cstring>

using std::string;

int main() {
    std::vector<int> matriz;
    
    for(int i=0; i<25; i++){ 
		std::cin >> matriz[i];
	  }

    for(int i=0; i<25; i += 5){ 
		std::cout << matriz[i] << matriz[i+1] << matriz[i+2] << matriz[i+3] << matriz[i+4] << "\n";
	  }

    return 0;
}