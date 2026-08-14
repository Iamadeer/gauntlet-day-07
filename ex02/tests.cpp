#include "RandomSource.hpp"
#include "Dice.hpp"
#include "catch_amalgamated.hpp"

class FakeRandom : public RandomSource{

public:
    int next(int) override{return m_value;};


    int m_value;
};

TEST_CASE("rng value 0 should give 1"){
    FakeRandom rng;
    rng.m_value = 0;
    Dice dice(rng);

    CHECK(dice.roll() == 1);

}

TEST_CASE("rng value 5 should give 6"){
    FakeRandom rng;
    rng.m_value = 5;
    Dice dice(rng);

    CHECK(dice.roll() == 6);

}