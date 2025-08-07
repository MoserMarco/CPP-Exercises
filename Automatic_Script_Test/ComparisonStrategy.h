//
// Created by admin on 06-Aug-25.
//

#ifndef COMPARISONSTRATEGY_H
#define COMPARISONSTRATEGY_H

#include <iostream>
#include <vector>
#include <memory>
#include <functional>

// Strategy for comparing outputs after executing functions
class ComparisonStrategy {
public:
    virtual bool compare(const void* a, const void* b) const = 0;
    virtual void print(const void* a, const void* b, size_t index, const std::string& label) const {
        bool result = compare(a, b);
        std::cout << label << " " << index << ": ";
        std::cout << (result ? "OK" : "DIFFERENT") << " ";
    }

    virtual ~ComparisonStrategy() {}
};

// ---------- Concrete Comparison Strategies ----------

// Compare two int values directly
class IntValueComparison : public ComparisonStrategy {
public:
    bool compare(const void* a, const void* b) const override {
        return *(const int*)a == *(const int*)b;
    }

    void print(const void* a, const void* b, size_t index, const std::string& label) const override {
        int valA = *(const int*)a;
        int valB = *(const int*)b;
        bool result = (valA == valB);

        std::cout << label << " " << index << ": "
                  << valA << " vs " << valB
                  << " -> " << (result ? "OK" : "DIFFERENT") << "\n";
    }
};

// Compare values pointed to by two int pointers
class IntPointerValueComparison : public ComparisonStrategy {
public:
    bool compare(const void* a, const void* b) const override {
        return *(int*)a == *(int*)b;
    }

    void print(const void* a, const void* b, size_t index, const std::string& label) const override {
        int valA = *(int*)a;
        int valB = *(int*)b;
        bool result = (valA == valB);

        std::cout << label << " " << index << ": "
                  << valA << " vs " << valB
                  << " -> " << (result ? "OK" : "DIFFERENT") << "\n";
    }
};
// Compare two int return values directly
class IntReturnComparison : public ComparisonStrategy {
public:
    bool compare(const void* a, const void* b) const override {
        return *(int*)a == *(int*)b;
    }

    void print(const void* a, const void* b, size_t, const std::string& label) const override {
        int valA = *(int*)a;
        int valB = *(int*)b;
        bool result = (valA == valB);

        std::cout << label << ": "
                  << valA << " vs " << valB
                  << " -> " << (result ? "OK" : "DIFFERENT") << "\n";
    }
};

#endif //COMPARISONSTRATEGY_H
