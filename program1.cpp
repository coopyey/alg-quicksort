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

//Traditional Quicksort
void trad_quicks(std::vector<int> &a, int low, int hi) {
    if (low<hi) {
        int part_index = part(a, low, hi);
        trad_quicks(a, low, part_index-1);
        trad_quicks(a, part_index+1, hi);
    }
}

//Random pivot generation
int rand_part(std::vector<int> &a, int low, int hi) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(low, hi);
    int rng = dis(gen);

    swap(&a[rng], &a[hi]);

    return part(a, low, hi);
}

//Random Quicksort
void rand_quicks(std::vector<int> &a, int low, int hi) {
    if (low<hi) {
        int part_index = rand_part(a, low, hi);
        rand_quicks(a, low, part_index-1);
        rand_quicks(a, part_index+1, hi);
    }
}

void printer(std::vector<int> &a, int in, std::ostream& ofs) {
    for(std::vector<int>::iterator it = a.begin(); it != a.end(); ++it)
        ofs << ' ' << *it << ' ';
}

void adder(std::vector<int> &a, int x) {
    for(unsigned int i = 0; i < a.size(); ++i) 
        a[i] += i*x;
}