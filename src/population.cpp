#include "population.hpp"

Population::Population(int64_t num_people)
{
  people_.reserve(num_people);
  for(int64_t i = 0; i < num_people; i++){
    people_.push_back(Human(date(2000, 1, 1)));
  }
}
