//
// Created by admin on 06-Aug-25.
//

#ifndef ASSIGNMENTSTRATEGY_H
#define ASSIGNMENTSTRATEGY_H

#include <iostream>
#include <vector>
#include <memory>
#include <functional>

// ---------- Strategy Interfaces ----------

// Strategy for assigning values before executing functions
class AssignmentStrategy {
public:
    virtual void assign(void** dest, const void* src) const = 0;
    virtual ~AssignmentStrategy() {}
};


// ---------- Concrete Assignment Strategies ----------

// Assign a copy of an int value (for pass-by-value)
class IntValueAssignment : public AssignmentStrategy {
public:
    void assign(void** dest, const void* src) const override {
        int* value = new int(*(const int*)src);
        *dest = value;
    }
};

// Deep copy an int* (for output pointer parameters)
class IntPointerAssignment : public AssignmentStrategy {
public:
    void assign(void** dest, const void* src) const override {
        int* ptr = new int(*(const int*)src);
        *dest = ptr;
    }
};




#endif //ASSIGNMENTSTRATEGY_H
