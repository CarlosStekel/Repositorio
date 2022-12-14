#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    int n;
    for(int i = 0; i < t; i++){
        std::cin >> n;
        std::vector<int> arreglo (n);
        std::vector<int> puntajes (n, 0);
        int max = 0;
        for(int j = 0;j < n; j++){
            std::cin >> arreglo[j];
        }
        for(int j = n-1; j >=0; j--){
            puntajes[j] = arreglo[j];
            if (j + arreglo[j] < n) {
                puntajes[j] += puntajes[j + arreglo[j]];
            }
            if (puntajes[j] > max){
                max = puntajes[j];
            }
        }
        std::cout << max << "\n";
    }  
    return 0;
}