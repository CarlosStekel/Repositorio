#include <bits/stdc++.h>

int puntajePonderadoS(std::stack<int> puntajes){
    int len = puntajes.size();
    int elimina = len/4;
    int sum = 0;
    for (int i = elimina; i<len; i++){
        sum += puntajes.top();
        puntajes.pop();
    }
    return sum;
}

int puntajePonderadoQ(std::queue<int> puntajes){
    int len = puntajes.size();
    int elimina = len/4;
    int sum = 0;
    for (int i = elimina; i<len; i++){
        sum += puntajes.front();
        puntajes.pop();
    }
    return sum;
}

int main() {
    int t;
    std::cin >> t;
    int n;
    for(int i = 0; i < t; i++){
        std::cin >> n;
        std::vector<int> die(n,0);
        std::vector<int> dcc(n,0);
        for(int j = 0;j < n; j++){
            std::cin >> die[j];
        }
        for(int j = 0;j < n; j++){
            std::cin >> dcc[j];
        }
        sort(die.begin(), die.end());
        sort(dcc.begin(), dcc.end());
        std::stack<int> sdie;
        std::queue<int> qdcc;
        for(int j = 0;j < n; j++){
            sdie.push(die[j]);
            qdcc.push(dcc[n - j - 1]);
        }
        int j = 0;
        while (puntajePonderadoQ(qdcc) > puntajePonderadoS(sdie)) {
            int r = (puntajePonderadoQ(qdcc) - puntajePonderadoS(sdie))/100;
            if (r > 1) {
                for(int k = 0; k<r;k++){
                    qdcc.push(0);
                    sdie.push(100);    
                }
                j += r;
            }
            else{
                qdcc.push(0);
                sdie.push(100);
                j += 1;
            }
        }
        std::cout << j << "\n";
    }
    return 0;
}