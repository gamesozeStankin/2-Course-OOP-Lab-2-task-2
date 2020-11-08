//
// Created by Kostantin Alaev on 08.11.2020.
//

#ifndef OOP_LAB2_2_CLASS2_H
#define OOP_LAB2_2_CLASS2_H

#include "Class1.h"

class Class2 : public Class1 {
public:
    Class2() = default;

    Class2(const Class2& obj);

    ~Class2() = default;
};


#endif //OOP_LAB2_2_CLASS2_H
