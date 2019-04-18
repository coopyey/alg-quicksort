#include "program1.hpp"

int main() {
    int num_in = 0;

    std::cout << "Input number of values: ";
    std::cin >> num_in;

    std::vector<int> a;
    seed(a, num_in);
    int n = a.size();

    auto start = std::chrono::high_resolution_clock::now();
    quicks(a, 0, n-1);
    auto stop = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> span = stop - start;

    std::cout << "Sorted:\n";
    printer(a);
    std::cout << "\nIt took " << span.count() << " seconds to sort " << num_in << " values.\n";
    return 0;
}