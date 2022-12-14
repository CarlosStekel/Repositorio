#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    int n;
    for(int i = 0; i < t; i++){
        std::cin >> n;
        std::vector<int> intimidacion(n,0);
        for(int j = 0;j < n; j++){
            std::cin >> intimidacion[j];
        }
        if(n%2 == 1){
            std::cout << "NO" << "\n";
        }
        else{
            int medio = intimidacion.size()/2;
            sort(intimidacion.begin(), intimidacion.end());
            bool sirve = true;
            for(int j = 0; j < medio; j++){
                sirve = sirve && (intimidacion[j] != intimidacion[medio + j]);
            }
            for(int j = 1; j < medio; j++){
                sirve = sirve && (intimidacion[j] != intimidacion[medio + j - 1]);
            }
            if(sirve){
                std::cout << "YES" << "\n";
                for(int j = 0; j < medio; j++){
                    std::cout << intimidacion[j] << " " << intimidacion[medio + j] << " ";
                }
                std::cout << "\n";
            }
            else{
                std::cout << "NO" << "\n";
            }   
        } 
    }
    return 0;
}