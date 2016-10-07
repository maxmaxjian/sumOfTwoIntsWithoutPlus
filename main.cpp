#include <iostream>
#include <cmath>

// solution 1
// class solution {
//   public:
//     int getSum(int a, int b) {
//         return int(log2(pow(2,a)*pow(2,b)));
//     }
// };

// solution 2
class solution {
  public:
    int getSum(int a, int b) {
        return b == 0 ? a : getSum(a^b, (a&b) << 1);
    }
};

int main() {
    int a{500}, b{53};
    solution soln;

    int sum = soln.getSum(a,b);
    std::cout << "(" << a << " + " << b << ") = " << sum << std::endl;
}
