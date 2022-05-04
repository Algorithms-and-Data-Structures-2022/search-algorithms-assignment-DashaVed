#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair

    int left_index = 0;
    auto right_index = data.size() - 1;
    while (left_index <= right_index){
      if (data[left_index] + data[right_index] == sum){
        return std::make_pair(left_index, right_index);
      }
      if (data[left_index] + data[right_index] > sum){
        right_index--;
      }
      if (data[left_index] + data[right_index] < sum){
        left_index++;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment