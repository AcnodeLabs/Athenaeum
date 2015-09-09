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

static inline float skRandf() {
    return random() / (float) RAND_MAX;
}

static inline float skRand(float low, float high) {
    return skRandf() * (high - low) + low;
}
#endif /* CLogicReusable_hpp */
