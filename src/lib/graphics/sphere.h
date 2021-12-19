#ifndef RTIOW_SPHERE_H
#define RTIOW_SPHERE_H

#include "hittable.h"

class sphere : public hittable {
public:
    sphere() = default;
    sphere(point3 center, double r) : center(center), radius(r) {};

    bool hit(const ray &r, double  t_min, double t_max, hit_record &rec) const override;
public:
    point3 center;
    double radius;
};

#endif //RTIOW_SPHERE_H
