#include <iostream>
#include <complex>

int main() {
    // Creating complex numbers
    std::complex<float> c1(1.0f, 2.0f);  // 1.0 + 2.0i
    std::complex<float> c2(3.0f, 4.0f);  // 3.0 + 4.0i

    // Accessing real and imaginary parts
    std::cout << "c1: " << c1 << "\n";
    std::cout << "Real part of c1: " << c1.real() << "\n";
    std::cout << "Imaginary part of c1: " << c1.imag() << "\n";

    // Basic arithmetic operations
    std::complex<float> sum = c1 + c2;
    std::complex<float> difference = c1 - c2;
    std::complex<float> product = c1 * c2;
    std::complex<float> quotient = c1 / c2;

    std::cout << "Sum: " << sum << "\n";
    std::cout << "Difference: " << difference << "\n";
    std::cout << "Product: " << product << "\n";
    std::cout << "Quotient: " << quotient << "\n";

    // Magnitude and phase angle
    float magnitude = std::abs(c1); // Magnitude (sqrt(real^2 + imag^2))
    float angle = std::arg(c1);     // Phase angle (atan2(imag, real))

    std::cout << "Magnitude of c1: " << magnitude << "\n";
    std::cout << "Angle of c1: " << angle << " radians\n";

    // Conjugate of a complex number
    std::complex<float> conjugate = std::conj(c1);
    std::cout << "Conjugate of c1: " << conjugate << "\n";

    return 0;
}
