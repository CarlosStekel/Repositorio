#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    int n;
    for(int i = 0; i < t; i++){
        std::cin >> n;
        std::vector<int> generos (n);
        std::vector<int> siguentes (n);
        for(int j = 0; j < n; j++){
            std::cin >> generos[j];
            siguentes[j] = j+1;
        }
        siguentes[n-1] = 0;
        std::set< std::pair<int,int> > paresm;
        int actual;
        int siguente;
        for(int j= 0; j < n; j++){
            actual = generos[j];
            siguente = generos[siguentes[j]];
            if(std::gcd(actual, siguente) == 1){
                paresm.insert({j, siguentes[j]});
            }
        }
        std::vector<int> eliminados;
        auto iter = paresm.begin();
        while(!paresm.empty()){
            eliminados.push_back((*iter).second + 1);
            if(paresm.find({(*iter).second, siguentes[(*iter).second]}) != paresm.end() && (*iter).first != (*iter).second){
                paresm.erase(paresm.find({(*iter).second, siguentes[(*iter).second]}));
            }
            siguentes[(*iter).first] = siguentes[(*iter).second];
            actual = generos[(*iter).first];
            siguente = generos[siguentes[(*iter).first]];
            if(std::gcd(actual, siguente) == 1){
                paresm.insert({(*iter).first, siguentes[(*iter).first]});
            }
            int cota = (*iter).first + 1;
            paresm.erase(iter);
            iter = paresm.lower_bound({cota, 0});
            if(iter == paresm.end()){
                iter = paresm.begin();
            }
        }
        std::cout << eliminados.size() << " ";
        for(int j = 0; j < (int) eliminados.size(); j ++){
            std::cout << eliminados[j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}