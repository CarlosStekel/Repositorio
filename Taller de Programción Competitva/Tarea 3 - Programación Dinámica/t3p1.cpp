#include <bits/stdc++.h>

int main() {
    int N, M;
    while(std::cin >> N >> M, N != 0){
        std::vector< std::vector<int> > matriz (N, std::vector<int> (M));
        std::vector<int> maxv (N + 2, 0);
        for(int j = 0;j < N; j++){
            for(int k = 0; k < M; k++){
                std::cin >> matriz[j][k];
            }
        }
        int max2 = 0;
        std::vector<int> fila2 (N + 2, 0);
        for(int i = N-1; i >= 0; i--){
            int max = 0;
            std::vector<int> fila (M + 2, 0);
            for(int j = M-1; j >= 0; j--){
                fila[j] = std::max(matriz[i][j] + fila[j+2], fila[j+1]);
                if(fila [j] > max){
                    max = fila[j];
                }
            }
            maxv[i] = max;
            fila2[i] = std::max(maxv[i] + fila2[i+2], fila2[i+1]);
            if(fila2[i] > max2){
                max2 = fila2[i];
            }
        }
        std::cout << max2 << "\n";
    }
    return 0;
}