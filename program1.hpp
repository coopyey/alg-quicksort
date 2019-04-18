#ifndef _PROGRAM1_HPP_
#define _PROGRAM1_HPP_

const int MAX_RANGE = 10000;

#include <iostream>
#include <iomanip> //formatting floats
#include <random> //uniform dist rand #s
#include <chrono> //durating timing
#include <vector>

void seed (std::vector<int>&, int);
void swap (int*, int*);
int part(std::vector<int>&, int, int);
void quicks(std::vector<int>&, int, int);
void printer(std::vector<int>);

#endif