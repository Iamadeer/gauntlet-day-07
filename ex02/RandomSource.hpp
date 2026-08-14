#pragma once

struct RandomSource {                    // the seam: the one thing a test must control
    virtual int next(int max)= 0;       // returns 0 .. max-1
    virtual ~RandomSource() = default;   // deleted through a base pointer: day-3 rule
};