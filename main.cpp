#include <iostream>
#include <vector>

int main() {
    float sum = 0;
    std::vector<float> price {9.0, 21.0, 13.0, 23.5, 11.0, 11.5};
    std::vector<int> buy {2, 0, 4};
    for (int i : buy) {
        sum += price[i];
    }
    std::cout << "Sum: " << sum;
}