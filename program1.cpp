#include "program1.hpp"

void seed(std::vector<int> &a, int number) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, MAX_RANGE); 

     while(number > 0) {
        a.std::vector<int>::push_back(dis(gen));
        --number;
    }
}

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

//Traditional Partition
int part(std::vector<int> &a, int low, int hi) {
    int pivot = a[hi];
    int i = low-1;

    for (int j = low; j <= hi-1; ++j) {
        if (a[j] <= pivot) {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i+1], &a[hi]);
    return (i+1);
}

void quicks(std::vector<int> &a, int low, int hi) {
    if (low<hi) {
        int part_index = part(a, low, hi);
        quicks(a, low, part_index-1);
        quicks(a, part_index+1, hi);
    }
}

void printer(std::vector<int> a) {
    for(std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
        std::cout << ' ' << *it << '\n';
    std::cout << '\n';
}