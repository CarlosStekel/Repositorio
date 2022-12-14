#include <bits/stdc++.h>

int main() {
    int t;
    int n;
    std::cin >> t;
    for(int k = 0;k < t; k++){
        std::cin >> n;
        std::vector<int> lista (n);
        std::vector<int> indb;
        for(int i = 1;i <= n;i++){
            std::cin >> lista[i - 1];
            if(i > lista[i - 1]){
                indb.push_back(i);
            }
        }
        long long contador = 0;
        for(int i = indb.size() - 1; i > 0; i--){
            int j = lista[indb[i] - 1];
            int l = 0;
            int r = indb.size() - 1;
            int mid = (l + r) /2;
            while(l < r){
                mid = (l + r) /2;
                if(indb[mid] >= j){
                    r = mid;
                }
                else{
                    l = mid + 1;
                }
            }
            mid = (l + r) /2;
            contador += mid; 
        } 
        std::cout << contador << "\n";
    }
    return 0;
}