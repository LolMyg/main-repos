#include <iostream>
#include <iomanip>
#include <cmath>

bool f(int choice, double x, double& y) {
    switch (choice) {
        case 1:
            if (x < 0) {
                return false;
            }
            else {
                y = std::sqrt(x);
                return true;
            }
        case 2:
            if (x <= 0) {
                return false;
            }
            else {
                y = std::log(x);
                return true;
            }
        case 3: y = std::sin(x);                        
            return true;
        case 4: y = std::cos(x);                        
            return true;
        case 5: y = x * x + 2 * x + 1;                  
            return true;
        default: 
            return false;
    }
}

int main() {
    setlocale(LC_ALL, "ru");

	std::cout << "Выберите функцию:" << "\n";
    std::cout << "  1. y = sqrt(x)" << "\n";
	std::cout << "  2. y = ln(x)" << "\n";
    std::cout << "  3. y = sin(x)" << "\n";
    std::cout << "  4. y = cos(x)" << "\n";
    std::cout << "  5. y = x^2 + 2x + 1" << "\n";
    int choice;
    std::cin >> choice;

    if (choice < 1 || choice > 5) {
        std::cout << "ошибка: неверный номер функции." << "\n";
        return 1;
    }
    
    double a, b, h;

     std::cout << "Введите начало интервала a: ";
     std::cin >> a;

     std::cout << "Введите конец интервала b: ";
     std::cin >> b;

     std::cout << "Введите шаг h: ";
     std::cin >> h;

     if (a > b) {
         std::cout << "начало интервала должно быть меньше конца интервала.";
         return 1;
     }
     if (h <= 0) {
         std::cout << "шаг должен быть больше 0";
         return 1;
     }

     std::cout << "+-----------+-----------+" << "\n";
     std::cout << "|     x     |     y     |" << "\n";
     std::cout << "+-----------+-----------+" << "\n";

     std::cout << std::fixed << std::setprecision(4);

     double sumY = 0.0, minY = 0.0, maxY = 0.0, xMin = a, xMax = a;
     bool first = true;
    
     for (double x = a; x <= b + 1e-9; x += h) {
         double y;
         if (!f(choice, x, y)) {
             std::cout << std::setw(11) << x << " |  (не определено)\n";
             continue;
         }
         std::cout << std::setw(11) << x << " | " << std::setw(10) << y << "\n";

         sumY += y;

         if (first) {
             minY = maxY = y;
             xMin = xMax = x;
             first = false;
         }
         else {
             if (y < minY) { minY = y; xMin = x; }
             if (y > maxY) { maxY = y; xMax = x; }
         }
     }
     std::cout << "-----------------------------------" << "\n";
     std::cout << "Сумма значений:  " << sumY << "\n";
     std::cout << "Минимум:  f(" << xMin << ") = " << minY << "\n";
     std::cout << "Максимум: f(" << xMax << ") = " << maxY << "\n";
     return 0;
}