//
// Created by stuart on 22/05/2020.
//

#include "pricingbook.h"

int PricingBook::processItem(char itemCode) {
    return items[itemCode];
}

PricingBook::PricingBook() {
    items['A'] = 50;
    items['B'] = 30;
    items['C'] = 20;
    items['D'] = 15;
}
