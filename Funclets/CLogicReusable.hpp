//
//  CLogicReusable.hpp
//  SpriteWalkthrough1
//
//  Created by xalintosh on 9/9/15.
//  Copyright © 2015 xalintosh. All rights reserved.
//

#ifndef CLogicReusable_hpp
#define CLogicReusable_hpp

#include <stdio.h>
#include <stdlib.h>

static inline float xalRand() {
 
    return random() / (float) RAND_MAX;
}

static inline float xalRandInRange(float low, float high) {
    return xalRand() * (high - low) + low;
}
#endif /* CLogicReusable_hpp */
