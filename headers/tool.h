#include <string>
#include <vector>
#include "item.h"

class Tool : Item{
    float damage, attackPoint, backSwing, durability;
    std::vector<std::string> traits;
    
    public:Tool();
};
