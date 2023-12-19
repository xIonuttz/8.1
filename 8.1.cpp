#include <iostream>
#include <cmath>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    ComplexNumber(double r, double i) : real(r), imaginary(i) {}

    // Calculate the module (magnitude) of the complex number
    double module() const {
        return std::sqrt(real * real + imaginary * imaginary);
    }

    // Getters for real and imaginary parts
    double getReal() const {
        return real;
    }

    double getImaginary() const {
        return imaginary;
    }

    // Compare two complex numbers based on their module
    ComplexNumber minModule(const ComplexNumber& other) const {
        return (module() < other.module()) ? *this : other;
    }

    // Display the complex number
    void display() const {
        std::cout << "(" << real << " + " << imaginary << "i)" << std::endl;
    }
};

int main() {
    ComplexNumber complexNumber1(3, 4);
    ComplexNumber complexNumber2(1, -2);

    // Find the complex number with the minimum module
    ComplexNumber minModComplex = complexNumber1.minModule(complexNumber2);

    // Display information about the complex numbers
    std::cout << "Complex Number 1: ";
    complexNumber1.display();
    std::cout << "Complex Number 2: ";
    complexNumber2.display();

    // Display the complex number with the minimum module
    std::cout << "\nComplex Number with Minimum Module: ";
    minModComplex.display();

    return 0;
}
