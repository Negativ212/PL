#include <cmath>

// 1) const auto, acos(0)
const auto Pi1 = acos(0) * 2;
static_assert(Pi1 > 3);          

// 2) constexpr auto, std::acos(0)
constexpr auto Pi2 = std::acos(0) * 2;   

static_assert(Pi2 > 3);       
// 3) const auto, acos(x)
double x = 0;
const auto Pi3 = acos(x) * 2;
static_assert(Pi3 > 3);        

// 4) constexpr auto, std::acos(x)
constexpr auto Pi4 = std::acos(x) * 2;   
static_assert(Pi4 > 3);               