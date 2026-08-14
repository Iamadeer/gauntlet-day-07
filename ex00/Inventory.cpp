#include "Inventory.hpp"


void Inventory::add(const std::string& item){
    m_inventory.push_back(item);
    m_count ++;
};
void Inventory::remove(const std::string& /*item*/){

};   
bool Inventory::has(const std::string& /*item*/) const{
    return false;
};
int  Inventory::count() const{
    return m_count;
};