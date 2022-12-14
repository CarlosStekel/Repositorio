#include <iostream>
#include <vector>
#include <cstring>

using std::string;

int main() {
    int n;
    std::cin >> n;
    std::vector<string> palabras (n); 

    for(int i=0; i<n ; i += 1){
        std::cin >> palabras[i];
    }

    for(int i=0; i<n ; i += 1){
        int len = palabras[i].length();
        if (len > 10) {
            std::cout << palabras[i][0] << len-2 << palabras[i][len-1]<< "\n";
        }
        else {
            std::cout << palabras[i] << "\n";
        }
    }

    return 0;
}