#include <iostream>
ة#include "constant.cpp"
using namespace std;

const double Constant::EULER_CONST = 2.718281828459045;
const int Constant::TAYLOR_ITERATIONS = 10;

class MathHelper {
public:
    static double absoluteValue(double num) {
        return (num < 0) ? -num : num;
    }

    static double maxNumber(double num1, double num2) {
        return (num1 > num2) ? num1 : num2;
    }

    static void previousAndNext(int num) {
        cout << "القيمة السابقة: " << num - 1 << endl;
        cout << "القيمة اللاحقة: " << num + 1 << endl;
    }

    static char convertToCapital(char smallChar) {
        return toupper(smallChar);
    }

    static char convertToSmall(char smallChar) {
        return toupper(smallChar);
    }
    static double customLog(double x) {
        if (x <= 0) {
            return 0.0 / 0.0;  // NaN
        }
        
        int powerAdjustment = 0;
        while (x > 1.0) {
            x /= Constant::EULER_CONST;
            powerAdjustment++;
        }
        while (x < 0.25) {
            x *= Constant::EULER_CONST;
            powerAdjustment--;
        }

        x -= 1.0;
        double result = 0.0, sign = 1.0, term = x;
        for (int k = 1; k <= Constant::TAYLOR_ITERATIONS; k++) {
            result += sign * term / k;
            sign = -sign;
            term *= x;
        }

        return result + powerAdjustment;
    }

    static double customExp(double x, int terms = 50) {
        double result = 1.0;
        double term = 1.0;
        
        for (int i = 1; i <= terms; ++i) {
            term *= x / i;
            result += term;
        }

        return result;
    }

    static double customPow(double base, double exponent) {
        return customExp(exponent * customLog(base));
    }
};

