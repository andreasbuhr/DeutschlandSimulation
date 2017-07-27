#ifndef POPULATION_H_INCLUDED_
#define POPULATION_H_INCLUDED_

#include "human.hpp"

class Population{
public:
  Population(int64_t num_people);

private:
  std::vector<Human> people_;
};

#endif // POPULATION_H_INCLUDED_
