#include "pxt.h"
using namespace pxt;

namespace test{
  //%block=sum %x| + %y blockId="sum"
  //%shim=test::number_sum
  float number_sum(int x, int y){
    return x/y;
  }
}
