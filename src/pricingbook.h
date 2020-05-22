//
// Created by stuart on 22/05/2020.
//

#ifndef SHOPPINGCART_PRICINGBOOK_H
#define SHOPPINGCART_PRICINGBOOK_H


#include <map>

class PricingBook {
public:
    PricingBook();
    int processItem(char itemCode);

private:
    std::map<char, int> items;

};


#endif //SHOPPINGCART_PRICINGBOOK_H
