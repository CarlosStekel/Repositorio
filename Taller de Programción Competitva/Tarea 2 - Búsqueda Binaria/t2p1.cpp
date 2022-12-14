#include <bits/stdc++.h>

int main() {
    int n;
    int q;
    int busco;
    std::cin >> n >> q;
    std::vector<int> lista(n);
    for(int i = 0;i < n; i++){
        std::cin >> lista[i];
    }
    for(int i = 0;i < q; i++){
        std::cin >> busco;
        int l = 0;
        int r = n - 1;
        int mid;
        while(l < r){
            mid = (l + r)/2;
            if(lista[mid] >= busco){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        mid = (l +r)/2;
        if(lista[mid] == busco){
            std::cout << mid << "\n";
        }
        else{
            std::cout << -1 << "\n"; 
        }
    }
    return 0;
}