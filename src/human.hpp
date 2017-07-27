#ifndef HUMAN_H_INCLUDED_
#define HUMAN_H_INCLUDED_

#include <boost/date_time/gregorian/gregorian.hpp>

using namespace boost::gregorian;

class Human{
public:
  Human(date birthday);
    
private:
  date birthday_;
  bool female_;
  bool alive_; // so we don't have to remove dead people right away
};

#endif // HUMAN_H_INCLUDED_
