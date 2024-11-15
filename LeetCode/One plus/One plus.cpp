#include <vector>
class Solution { //весь код прогоняется внутри сайта через дебаггер, не знал поэтому изначально решил какую-то фигню делать
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; --i) {
            ++digits[i];
            digits[i] %= 10;
            if (digits[i] != 0) return digits;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};//по факту разобрался как работать с массивом
