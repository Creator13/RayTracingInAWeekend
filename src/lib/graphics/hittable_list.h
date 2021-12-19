
#ifndef RTIOW_HITTABLE_LIST_H
#define RTIOW_HITTABLE_LIST_H

#include "hittable.h"
#include <memory>
#include <vector>

class hittable_list : public hittable {
public:
    hittable_list() = default;

    hittable_list(std::shared_ptr<hittable> object) { add(object); }

    void clear() { objects.clear(); }

    void add(std::shared_ptr<hittable> object) { objects.push_back(object); }

    bool hit(const ray &r, double t_min, double t_max, hit_record &rec) const override;

public:
    std::vector<std::shared_ptr<hittable>> objects;
};


#endif //RTIOW_HITTABLE_LIST_H
