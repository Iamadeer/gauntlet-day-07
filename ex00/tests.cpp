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

TEST_CASE("Remove should reduce the counter and has cannot find the deleted item"){
    Inventory inv;
    inv.add("sword");
    inv.add("potion");
    inv.remove("sword");
    CHECK(inv.count() == 1);
    CHECK(inv.has("sword") == false);

}


TEST_CASE("REMOVING an non exsit items does not change the invnetory or count"){
    Inventory inv;
    inv.add("shield");
    inv.add("sword");
    inv.remove("potion");
    CHECK(inv.count() == 2);
    CHECK(inv.has("shield") == true && inv.has("sword") == true);
}