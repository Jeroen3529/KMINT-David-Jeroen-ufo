//
// Created by David van der Zalm on 13-3-2021.
//

#include "kmint/ufo/states/tank/roamTankState.h"

//#include "kmint/random.hpp"

namespace kmint::ufo {
    void roamTankState::tick(tank &tank) {
        int next_index = random_int(0, tank.getCurrentNode().num_edges());
        tank.setCurrentNode(next_index);
    }
}