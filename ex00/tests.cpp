#include "catch_amalgamated.hpp"
#include "Inventory.hpp"
#include <string>
#include <vector>


TEST_CASE("Adding an item increases the counter"){
    Inventory inv;
    inv.add("potion");
    CHECK(inv.count() == 1);
}

TEST_CASE("Check for has function can find the item"){
    Inventory inv;
    inv.add("sword");
    CHECK(inv.has("sword") == true);
    CHECK(inv.has("shield") == false);
}

