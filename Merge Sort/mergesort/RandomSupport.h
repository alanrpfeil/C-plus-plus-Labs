//
// A small library for sampling random numbers from a uniform distribution
//
#ifndef RandomSupport_h
#define RandomSupport_h

#include <random>

int call_counter = 0;

typedef std::uniform_int_distribution<long> uniform_distribution;
typedef std::mt19937 randomizer;

randomizer new_randomizer(){
    randomizer rng;
    rng.seed(std::random_device()());
    return rng;
}

uniform_distribution new_distribution(long start, long end){
    uniform_distribution dist(start, end);
    return dist;
}

long sample(uniform_distribution& dist, randomizer& r){
    call_counter++;
    return dist(r);
}

#endif

