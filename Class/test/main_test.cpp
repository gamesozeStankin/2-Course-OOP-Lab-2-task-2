//
// Created by Kostantin Alaev on 08.11.2020.
//

#include "gtest/gtest.h"
#include "Class2.h"

TEST(AutoCopy, UsageTest) {
    Class2 obj;
    Class2 obj_new(obj);

    // new obj
    ASSERT_NE(&obj, &obj_new);
}

int main() {
    ::testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}