#ifndef RTIOW_H
#define RTIOW_H

#include <cmath>
#include <limits>
#include <memory>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;


const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double deg_to_rad(double degrees) {
    return degrees * pi / 180.0;
}

#include <math/vec3.h>
#include <graphics/ray.h>

#endif //RTIOW_H
