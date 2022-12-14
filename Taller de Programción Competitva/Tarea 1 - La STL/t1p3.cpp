#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    int n;
    int m;
    for(int i = 0; i < t; i++){
        std::cin >> n >> m;
        std::vector< std::vector<int> > matriz (n, std::vector<int> (m));
        std::vector< std::vector<int> > matrizO (n, std::vector<int> (m));
        for(int j = 0;j < n; j++){
            for(int k = 0; k < m; k++){
                std::cin >> matriz[j][k];
                matrizO[j][k] = matriz[j][k];
            }
        }
        for(int j = 0;j < n; j++){
            sort(matrizO[j].begin(),matrizO[j].end());
        }
        int m1 = -1;
        int m2 = -1;
        for(int j = 0;j < n; j++){
            for(int k = 0; k < m; k++){
                if(matriz[j][k] != matrizO[j][k]){
                    if(m1 == -1){
                        m1 = k;
                    }
                    else{
                        m2 = k;
                    }
                }
                if(m1 != -1 && m2 != -1){
                    break;
                }
            }
            if(m1 != -1 && m2 != -1){
                break;
            }
        }
        if(m1 == -1 && m2 == -1){
            std::cout << 1 << " " << 1 << "\n";
        }
        else{
            for(int i = 0; i < n; i++){
                std::swap(matriz[i][m1],matriz[i][m2]);
            }
            if(matriz != matrizO){
                std::cout << -1 << "\n";
            }
            else{
                std::cout << m1 + 1 << " " << m2 + 1 << "\n";
            }
        }
    }  
    return 0;
}