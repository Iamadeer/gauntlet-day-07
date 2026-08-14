#include "Inventory.hpp"


void Inventory::add(const std::string& item){
    m_inventory.push_back(item);
    m_count ++;
};
void Inventory::remove(const std::string& item){
    for (auto it = m_inventory.begin(); it != m_inventory.end(); it++){
        if (*it == item){
            m_inventory.erase(it);
            m_count -= 1;
            return;
        }
    }

};   
bool Inventory::has(const std::string& item) const{
    for (const std::string& inventory : m_inventory){
        if (inventory == item) {
            return true;
        }
    }
    return false;
};
int  Inventory::count() const{
    return m_count;
};