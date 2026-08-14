#include "catch_amalgamated.hpp"
#include "Inventory.hpp"
#include <string>
#include <vector>


TEST_CASE("Adding an item increases the counter"){
    Inventory inv;
    inv.add("potion");
    CHECK(inv.count() == 1);
}

