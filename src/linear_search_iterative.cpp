#include "assignment/linear_search_iterative.hpp"

namespace assignment {

  std::optional<int> LinearSearchIterative::Search(const std::vector<int>& data, int search_element) const {

    // Tips: итеративно пройдитесь по элементам
    for (int index = 0; index < data.size(); index++){
      if (data[index] == search_element){
        return index;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment