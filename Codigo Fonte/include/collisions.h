#ifndef COLLISIONS_H
#define COLLISIONS_H

#include <glm/glm.hpp>
#include "tiny_obj_loader.h"

struct ObjModel;

struct AABB {
    glm::vec3 min;
    glm::vec3 max;
};

AABB CalculateAABB(const ObjModel& model, const glm::mat4& transform);
bool CheckCollision(const AABB& a, const AABB& b);

#endif //COLLISIONS_H
