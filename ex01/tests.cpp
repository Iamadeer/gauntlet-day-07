#include "catch_amalgamated.hpp"
#include "Inventory.hpp"
#include <string>
#include <vector>

struct InventoryFixture {
    Inventory inv;                 
    InventoryFixture() { inv.add("potion"); inv.add("sword"); }
};

TEST_CASE_METHOD(InventoryFixture, "adding an item incrase count") {
    inv.add("elixer");
    CHECK(inv.count() == 3);
}

TEST_CASE_METHOD(InventoryFixture, "Check for has function can find the item") {
    CHECK(inv.has("sword") == true);
    CHECK(inv.has("elixir") == false);
}

TEST_CASE_METHOD(InventoryFixture, "Remove should reduce the counter and has cannot find the deleted item") {
    inv.remove("sword");
    CHECK(inv.count() == 1);
    CHECK(inv.has("sword") == false);
}

TEST_CASE_METHOD(InventoryFixture, "REMOVING an non exsit items does not change the invnetory or count") {
    inv.remove("elixer");
    CHECK(inv.count() == 2);
    CHECK(inv.has("sword") == true);
    CHECK(inv.has("potion") == true);

}