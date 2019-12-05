/* Example of calling boost */

#include <boost/beast/core/span.hpp>
#include <iostream>

int main(int argc, char *argv[]) {
  int arr[] = {1, 2, 3};
  boost::beast::span<int> my_array(arr, 3);
  for (auto i = my_array.begin(); i != my_array.end(); ++i) {
    std::cout << *i << std::endl;
  }

  std::cout << "Hello, world!" << std::endl;
  return 0;
}
