#include <iostream>
#include <glm/glm.hpp>
#include <glm/vec3.hpp>


int main(int argc, char** argv) {

  glm::vec3 test{2.0f, 2.0f, 2.0f};

  float length = glm::length(test);

  
  std::cout << "Length should show as approximately ~3.4641: " << length << std::endl;

  return 0;

}
