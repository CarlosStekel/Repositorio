#include <bits/stdc++.h>

int main() {
    int n, u;
    std::vector<int> res;
    while(std::cin >> n >> u, n != -1){
        std::vector<int> p (n);
        int max = 0;
        for(int i = 0; i < n; i++){
            std::cin >> p[i];
            if(p[i] > max){
                max = p[i];
            }
        }
        int l = 1;
        int r = max;
        int mid;
        while(l < r){
            mid = (l + r)/2;
            int urn = 0;
            for(int i = 0; i < n; i++){
                urn += ceil(double(p[i]) / mid);
            }
            if(urn <= u){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        mid = (l + r)/2;
        res.push_back(mid);
    }
    for(int i = 0; i < res.size(); i++){
        std::cout << res[i] << "\n";
    }
    return 0;
}