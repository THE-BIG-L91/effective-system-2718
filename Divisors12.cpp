#include <iostream>
#include <cmath>
#include <vector>
#include <bits/stdc++.h>
#include <chrono>
#include <ctime>

int PrimeFactor(int n)
{
    std::vector<int> Divisors(1, 1);

    unsigned int Factors = 1;
    unsigned int i = 2;
    unsigned int k = n;

    // Grab all prime factors of n and append them to
    // vector Divisors
    while (i <= k)
    {
        if (k % i == 0)
        {
            Divisors.push_back(i);
            k = k / i;
        }
        else
        {
            i++;
        };
    };

    // Get sum of all positive divisors of n using
    // prime factors of n, and their exponents
    for (int k = 1; k < Divisors.size(); k++)
    {
        if (Divisors[k - 1] != Divisors[k])
        {
            Factors *= 1 + (std::count(Divisors.begin(), Divisors.end(), Divisors.at(k)));
        };
    };

    return Factors;
}

int triangle(int n)
{
    return (n * (n + 1)) / 2;
};

int main()
{
    for (int i = 10000; i < 100000; i++)
    {
        std::chrono::time_point<std::chrono::system_clock> start, end;

        start = std::chrono::system_clock::now();
        int triang = triangle(i);
        int k = PrimeFactor(triang);
        std::cout << "d(" << triang << ") = " << k;
        end = std::chrono::system_clock::now();

        std::chrono::duration<double> elapsed_seconds = end - start;
        std::cout << " |  elapsed time: " << elapsed_seconds.count() << "s\n";
        if (k > 500)
        {
            std::cout << "Found occurrence: " << triang << " | d(" << triang << ") = " << k << "\n";
            break;
        }
    }
    return 0;
};
