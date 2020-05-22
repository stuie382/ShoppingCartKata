//
// Created by stuart on 22/05/2020.
//

#ifndef SHOPPINGCART_CHECKOUT_H
#define SHOPPINGCART_CHECKOUT_H


#include "pricingbook.h"

class Checkout {
public:
    Checkout(PricingBook pricingBook);
    int total();
    void scan(char item);
private:
    PricingBook _pricingBook;
    int _total;
};


#endif //SHOPPINGCART_CHECKOUT_H
