#include "assignment/linear_search_two_pointers.hpp"

namespace assignment {

  std::optional<int> LinearSearchTwoPointers::Search(const std::vector<int>& data, int search_element) const {

    // Tips:
    // 1. Задайте две переменные: (1) индекс первого элемента и (2) индекс последнего элемента.
    // 2. Проверяйте наличие целевого элемента по индексам.
    // 3. Обновляйте индексы пока левый не станет больше правого.

    int left_index = 0;
    int right_index = data.size() - 1;
    if (right_index < 0){
      return std::nullopt;
    }
    while (left_index <= right_index){
      if (data[left_index] == search_element){
        return left_index;
      }
      if (data[right_index] == search_element){
        return right_index;
      }
      right_index--;
    }
    return std::nullopt;
  }

}  // namespace assignment