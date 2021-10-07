#include "Header.h"

void generateNumbers()
{
    std::vector<double> x1(100);
    std::vector<int> x2(x1.size());
    std::srand(time(NULL));

    std::generate(x1.begin(), x1.end(), []() { return (static_cast<double>(std::rand() % 1000) + 1) / 100; });
    std::copy(x1.begin(), x1.end(), x2.begin());

    std::copy(x1.begin(), x1.end(), std::ostream_iterator<double>(std::cout, " "));
    std::cout << "\n\n";
    std::copy(x2.begin(), x2.end(), std::ostream_iterator<int>{std::cout, " "});

    double result{};
    size_t i{};
    std::for_each(x1.begin(), x1.end(), [&x2, &result, &i](double x) { result += pow((x - x2.at(i)), 2); i++; });

    std::cout << std::endl;
    std::cout << "Result: " << sqrt(result / 100);
}
