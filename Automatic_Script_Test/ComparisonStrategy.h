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
    virtual void cleanup(void* ptr) const = 0; // per deallocare
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
        std::cout << label << " " << index << ": "
                  << valA << " vs " << valB
                  << " -> " << (valA == valB ? "OK" : "DIFFERENT") << "\n";
    }
    void cleanup(void* ptr) const override {
        delete static_cast<int*>(ptr);
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
        std::cout << label << " " << index << ": "
                  << valA << " vs " << valB
                  << " -> " << (valA == valB ? "OK" : "DIFFERENT") << "\n";
    }
    void cleanup(void* ptr) const override {
        delete static_cast<int*>(ptr);
    }
};

// Compare float parameters with 1% of tolerance
class FloatValueComparison : public ComparisonStrategy {
public:
    bool compare(const void* a, const void* b) const override {
        float valA = *(const float*)a;
        float valB = *(const float*)b;
        float tolerance = 0.01f * std::max(std::abs(valA), std::abs(valB));
        return std::abs(valA - valB) <= tolerance;
    }

    void print(const void* a, const void* b, size_t index, const std::string& label) const override {
        float valA = *(const float*)a;
        float valB = *(const float*)b;
        bool ok = compare(a, b);
        std::cout << label << " " << index << ": "
                  << valA << " vs " << valB
                  << " -> " << (ok ? "OK" : "DIFFERENT") << "\n";
    }

    void cleanup(void* ptr) const override {
        delete static_cast<float*>(ptr);
    }
};

// Compare double parameters with 1% of tolerance
class DoubleValueComparison : public ComparisonStrategy {
public:
    bool compare(const void* a, const void* b) const override {
        double valA = *(const double*)a;
        double valB = *(const double*)b;
        double tolerance = 0.01 * std::max(std::abs(valA), std::abs(valB));
        return std::abs(valA - valB) <= tolerance;
    }

    void print(const void* a, const void* b, size_t index, const std::string& label) const override {
        double valA = *(const double*)a;
        double valB = *(const double*)b;
        bool ok = compare(a, b);
        std::cout << label << " " << index << ": "
                  << valA << " vs " << valB
                  << " -> " << (ok ? "OK" : "DIFFERENT") << "\n";
    }

    void cleanup(void* ptr) const override {
        delete static_cast<double*>(ptr);
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
        std::cout << label << ": "
                  << valA << " vs " << valB
                  << " -> " << (valA == valB ? "OK" : "DIFFERENT") << "\n";
    }
    void cleanup(void* ptr) const override {
        delete static_cast<int*>(ptr);
    }
};

// Compare two bool return values directly
class BoolReturnComparison : public ComparisonStrategy {
public:
    bool compare(const void* a, const void* b) const override {
        return *(const bool*)a == *(const bool*)b;
    }
    void print(const void* a, const void* b, size_t, const std::string& label) const override {
        bool valA = *(const bool*)a;
        bool valB = *(const bool*)b;
        std::cout << label << ": "
                  << (valA ? "True" : "False") << " vs "
                  << (valB ? "True" : "False")
                  << " -> " << (valA == valB ? "OK" : "DIFFERENT") << "\n";
    }
    void cleanup(void* ptr) const override {
        delete static_cast<bool*>(ptr);
    }
};

// Compare two double return values with 5% of tolerance
class DoubleReturnComparison : public ComparisonStrategy {
public:
    bool compare(const void* a, const void* b) const override {
        double valA = *(const double*)a;
        double valB = *(const double*)b;

        // Tolleranza: 5% rispetto al valore maggiore tra i due (o valore assoluto minimo per evitare zero)
        double tolerance = 0.05 * std::max(std::abs(valA), std::abs(valB));
        return std::abs(valA - valB) <= tolerance;
    }

    void print(const void* a, const void* b, size_t, const std::string& label) const override {
        double valA = *(const double*)a;
        double valB = *(const double*)b;
        bool ok = compare(a, b);
        std::cout << label << ": " << valA << " vs " << valB
                  << " -> " << (ok ? "OK" : "DIFFERENT") << "\n";
    }

    void cleanup(void* ptr) const override {
        delete static_cast<double*>(ptr);
    }
};

#endif // COMPARISONSTRATEGY_H
