#ifndef ASSIGNMENTSTRATEGY_H
#define ASSIGNMENTSTRATEGY_H

#include <iostream>
#include <vector>
#include <memory>
#include <functional>

// ---------- Strategy Interfaces ----------

class AssignmentStrategy {
public:
    virtual void assign(void** dest, const void* src) const = 0;
    virtual void cleanup(void* ptr) const = 0; // per deallocare
    virtual ~AssignmentStrategy() {}
};

// ---------- Concrete Assignment Strategies ----------

// Pass-by-value int
class IntValueAssignment : public AssignmentStrategy {
public:
    void assign(void** dest, const void* src) const override {
        *dest = new int(*(const int*)src);
    }
    void cleanup(void* ptr) const override {
        delete static_cast<int*>(ptr);
    }
};

// Deep copy int* (output pointer param)
class IntPointerAssignment : public AssignmentStrategy {
public:
    void assign(void** dest, const void* src) const override {
        *dest = new int(*(const int*)src);
    }
    void cleanup(void* ptr) const override {
        delete static_cast<int*>(ptr);
    }
};

class DoubleValueAssignment : public AssignmentStrategy {
public:
    void assign(void** dest, const void* src) const override {
        *dest = new double(*(const double*)src);
    }
    void cleanup(void* ptr) const override {
        delete static_cast<double*>(ptr);
    }
};

#endif // ASSIGNMENTSTRATEGY_H
