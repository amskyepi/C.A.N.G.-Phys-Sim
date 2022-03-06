#include "entt.hpp"
#include <glm/fwd.hpp>
#include <vector>
#define MAX_TIME 3.5
class Explosion{
        public:
//----------Fields------------------
        static float velocityArrayX[];
        static float velocityArrayY[];
        static float rotation[];
//----------Methods-----------------
        static void updateForcePositions(entt::registry *reg, float dt);
        static void updateTimeActive(entt::registry *reg, float dt);
};
