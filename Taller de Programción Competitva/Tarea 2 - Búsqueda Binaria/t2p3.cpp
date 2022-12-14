#include <bits/stdc++.h>

int main() {
    long long max;
    long long in;
    std::cin >> max >> in;
    long long r = sqrt(max)*sqrt(2.0) + 1;
    long long l = 1;
    long long mid;
    if(in < max){
        while(l < r){
            mid = l + (r - l)/2;
            if(max - in - (mid * (mid+1) / 2) <= 0){
                r = mid;
            }
            else{
                l = mid + 1;
            }
        }
        std::cout << l + in;
    }
    else{
        std::cout << max;
    }
    return 0;
}