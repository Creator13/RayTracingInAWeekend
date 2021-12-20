#ifndef RTIOW_CAMERA_H
#define RTIOW_CAMERA_H

#include <math/vec3.h>
#include "ray.h"

class camera {
public:
    camera();

    ray get_ray(double u, double v) const;

private:
    point3 origin;
    point3 lower_left_corner;
    vec3 horizontal;
    vec3 vertical;
};

#endif //RTIOW_CAMERA_H
