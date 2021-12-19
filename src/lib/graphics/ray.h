#ifndef RTIOW_RAY_H
#define RTIOW_RAY_H

#include <math/vec3.h>

class ray {
public:
    ray() = default;

    ray(const point3 &origin, const vec3 &direction) : orig(origin), dir(direction) {}

    point3 origin() const { return orig; }

    point3 direction() const { return dir; }

    point3 at(double t) const {
        return orig + t * dir;
    }

public:
    point3 orig;
    vec3 dir;
};

#endif //RTIOW_RAY_H
