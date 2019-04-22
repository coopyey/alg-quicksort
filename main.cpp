#include "program1.hpp"

int main() {
    //User input - # values to sort
    int num_in = 0;
    std::cout << "Input number of values: ";
    std::cin >> num_in;

    //Asks for multiplier X
    int mult = 0;
    std::cout << "Input multiplier X: ";
    std::cin >> mult;

    //Creates random numbers and fills vector to sort
    std::vector<int> a;
    seed(a, num_in);
    int n = a.size();
    adder(a, mult);

    std::ofstream ofs ("output.txt", std::ofstream::app);
    ofs << "Original:\n";
    printer(a, num_in, ofs);

    //Traditional quicksort
    auto start = std::chrono::high_resolution_clock::now();
    trad_quicks(a, 0, n-1);
    auto stop = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> span = stop - start;

    ofs << "\nSorted T(n):\n";
    printer(a, num_in, ofs);
    ofs << "\nTraditional quicksort done! It took " << span.count() << " seconds to sort " << num_in << " values.\n\n";
    std::cout << "\nTraditional quicksort done! It took " << span.count() << " seconds to sort " << num_in << " values.\n";

    //Random quicksort
    std::vector<int> b;
    seed(b, num_in);
    adder(b, mult);
    ofs << "Original:\n";
    printer(b, num_in, ofs);

    start = std::chrono::high_resolution_clock::now();
    rand_quicks(b, 0, n-1);
    stop = std::chrono::high_resolution_clock::now();
    span = stop - start;

    ofs << "\nSorted T'(n):\n";
    printer(b, num_in, ofs);
    std::cout << "Random quicksort done! It took " << span.count() << " seconds to sort " << num_in << " values.\n";
    ofs << "\nRandom quicksort done! It took " << span.count() << " seconds to sort " << num_in << " values.\n\n";

    //Sorted traditional quicksort, using sorted vector a
    ofs << "Reusing original trad_quicks array that is now sorted for B3.\n";
    ofs << "Original T'(n):\n";
    printer(a, num_in, ofs);

    start = std::chrono::high_resolution_clock::now();
    trad_quicks(a, 0, n-1);
    stop = std::chrono::high_resolution_clock::now();
    span = stop - start;

    ofs << "\nSorted T''(n):\n";
    printer(a, num_in, ofs);
    std::cout << "Traditional sorted quicksort done! It took " << span.count() << " seconds to sort " << num_in << " sorted values.\n";
    ofs << "\nTraditional sorted quicksort done! It took " << span.count() << " seconds to sort " << num_in << " sorted values.\n\n";

    //Sorted random quicksort, using sorted vector b 
    ofs << "Reusing original rand_quicks array that is now sorted for B4.\n";
    ofs << "Original T''(n):\n";
    printer(b, num_in, ofs);

    start = std::chrono::high_resolution_clock::now();
    rand_quicks(b, 0, n-1);
    stop = std::chrono::high_resolution_clock::now();
    span = stop - start;

    ofs << "\nSorted T'''(n):\n";
    printer(b, num_in, ofs);
    std::cout << "Random sorted quicksort done! It took " << span.count() << " seconds to sort " << num_in << " sorted values.\n";
    ofs << "\nRandom sorted quicksort done! It took " << span.count() << " seconds to sort " << num_in << " sorted values.\n\n";
   
    return 0;
}