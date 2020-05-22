//
// Created by stuart on 22/05/2020.
//

#include "checkout.h"

#include <utility>

int Checkout::total() {
    return _total;
}

void Checkout::scan(char item) {
    _total += _pricingBook.processItem(item);
}

Checkout::Checkout(PricingBook pricingBook)
        : _pricingBook(std::move(pricingBook)), _total(0) {

}
