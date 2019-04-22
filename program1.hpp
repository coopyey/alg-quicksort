#ifndef _PROGRAM1_HPP_
#define _PROGRAM1_HPP_

const int MAX_RANGE = 10000;

#include <iostream>
#include <fstream>
#include <random> //uniform dist rand #s
#include <chrono> //durating timing
#include <vector>

void seed (std::vector<int>&, int);
void swap (int*, int*);
void trad_quicks(std::vector<int>&, int, int);
void printer(std::vector<int>&, int, std::ostream&);
void rand_quicks(std::vector<int>&, int, int);
void adder(std::vector<int>&, int);

int part(std::vector<int>&, int, int);
int rand_part(std::vector<int>&, int, int);

#endif