//
// Created by Kostantin Alaev on 08.11.2020.
//
#include <iostream>
#include <vector>
#include "Class2.h"

void my_copy(const Class1& obj1, const Class1& obj2, const Class2& obj3, const Class2& obj4, std::vector<Class1>&);

int main() {
    std::vector<Class1> db;

    Class1 obj_1_0;
    Class1 obj_1_1;
    Class2 obj_2_0;
    Class2 obj_2_1;

    my_copy(obj_1_1, obj_1_0, obj_2_1, obj_2_0, db);

    return 0;
}

void my_copy(const Class1& obj1, const Class1& obj2, const Class2& obj3, const Class2& obj4, std::vector<Class1>& db) {
    Class1 obj1_new(obj1);
    Class1 obj2_new(obj2);
    Class2 obj3_new(obj3);
    Class2 obj4_new(obj4);

    db.push_back(obj1_new);
    db.push_back(obj2_new);
    db.push_back(obj3_new);
    db.push_back(obj4_new);
}
