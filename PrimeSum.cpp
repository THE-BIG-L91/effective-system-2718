#include <iostream>
#include <cmath>
void sieve(int n){
    long int sum = -1;
    bool arr[n+1];
    
    for (int i=0;i<n+1;i++){
        arr[i] = true;
    };
    
    for (int i=2;i<n+1;i++){
        for (int j = pow(i,2); j<n+1;j=j+i){
            arr[j] = false;
        };
    };
    
    for (int i=0;i<n+1;i++){
        if (arr[i] == true){
            std::cout<<i<<std::endl;
            sum = sum + i;
        };
    };
    
    std::cout<<sum<<std::endl;
};

int main() {
    sieve(2000000);
    return 0;
};
