#include "assignment/binary_search_iterative.hpp"

namespace assignment {

  std::optional<int> BinarySearchIterative::Search(const std::vector<int>& data, int search_element) const {

    // Tips:
    // 1. Заведите две переменные: (а) индекс левой границы и (б) индекс правой границы.
    // 2. Поиск ведется пока индекс левой границы не превысил индекс правой.
    // 3. Каждую итерацию вычисляйте индекс середины внутри области, задаваемой индексами левой и правой границы.
    // 4. Рассмотрите 3 случая:
    //    1) Целевой элемент равен элементу посередине.
    //    2) Целевой элемент меньше элемента посередине (область поиска сокращается).
    //    3) Целевой элемент больше элемента посередине (область поиска сокращается).
    int left_index = 0;
    int right_index = data.size() - 1;
    if (right_index < 0){
      return std::nullopt;
    }
    while (left_index <= right_index){
      int medium_index = (left_index + right_index) / 2;
      if (data[medium_index] == search_element){
        return medium_index;
      }
      if (data[medium_index] < search_element){
        left_index = medium_index + 1;
      }else{
        right_index = medium_index - 1;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment