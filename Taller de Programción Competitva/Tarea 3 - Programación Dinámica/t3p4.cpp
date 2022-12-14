#include <bits/stdc++.h>

 int main() {
    int n;
    std::cin >> n;
    std::vector<int> piedras (n);
    std::vector< std::vector<long long> > matriz (n, std::vector<long long> (n));
    for(int i = 0; i < n; i++) {
        std::cin >> piedras[i];
        if(i+1 < n){
            matriz[i][i+1] = 1;
        }
        matriz[i][i] = 1;
    }

    for(int i = 1; i < n; i++){
        for(int j = i-1; j >= 0; j--){
            matriz[i][j] = 501;
            for(int k = 1; k <= i - j; k++){
                matriz[i][j] = std::min(matriz[i][j], matriz[j + k - 1][j] + matriz[i][j+k]);
            }
            if(piedras[i] == piedras[j]){
                matriz[i][j] = std::min(matriz[i][j], matriz[i-1][j+1]);
            }
        }
    }
    
    std::cout << matriz[n-1][0];
    return 0;
}