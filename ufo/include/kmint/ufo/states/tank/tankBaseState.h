//
// Created by David van der Zalm on 13-3-2021.
//

#ifndef KMINT_DAVID_JEROEN_UFO_TANKBASESTATE_H
#define KMINT_DAVID_JEROEN_UFO_TANKBASESTATE_H

#include <map>

//#include "kmint/play.hpp"

namespace kmint::ufo{
    class tank;

    class tankBaseState {
    public:
        virtual void tick(tank& tank);
    };
}

#endif //KMINT_DAVID_JEROEN_UFO_TANKBASESTATE_H
