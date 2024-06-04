#include <stdio.h>
#include <iostream>
#include <cmath>

int triangle(int i){
    return (i*(i+1))/2;
}

int check(int n){
    int sum = 1;
    for (int i=1; i<ceil(sqrt(n)); i++){
        if (n%i == 0){
            sum++; 
        };
    };
    return sum;
};

int main(){
    for (int i=1; i<50000; i++){
        int k = check(triangle(i));
        if (k >= 1){
            std::cout<<i<<" | "<<triangle(i)<<" | "<<k<<std::endl;
        };
        if (k > 500){
            std::cout<<"Located | "<<triangle(i)<<std::endl;
            break;
        };
    }
    return 0;
};
