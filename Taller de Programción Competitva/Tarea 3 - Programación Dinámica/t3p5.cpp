#include <bits/stdc++.h>

 int main() {
    long long n;
    std::cin >> n;
    std::vector<long long> numeros (n);
    std::vector< std::vector<long long> > matriz (n, std::vector<long long> (n));
    for(long long i = 0; i < n; i++) {
        std::cin >> numeros[i];
        if(i-1 >= 0) {
            matriz[i][i-1] = std::max(numeros[i], numeros[i-1]);
        }
        matriz[i][i] = numeros[i];
    }

    for(long long i = 2; i < n; i++){
        for(long long j = i-2; j >= 0; j--){            
            matriz[i][j] = std::max(numeros[i] + std::min(matriz[i-1][j+1], matriz[i-2][j]), numeros[j] + std::min(matriz[i-1][j+1], matriz[i][j+2]));
        }
    }

    std::cout << matriz[n-1][0];
    return 0;
}