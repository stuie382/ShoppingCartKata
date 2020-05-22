//
// Created by stuart on 22/05/2020.
//
#include "gtest/gtest.h"
#include "checkout.h"
TEST(CheckoutTest, TotalIsZero) {
    Checkout checkout{};
    int total = checkout.total();
    EXPECT_EQ(0,total);
}

TEST(CheckoutTest, TotalIsZeroAfterScanningOneItem) {
    Checkout checkout{};
    checkout.scan('A');
    int total = checkout.total();
    EXPECT_EQ(0, total);
}
