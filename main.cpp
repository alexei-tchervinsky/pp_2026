#include <iostream>
#include <string>

int main()
{
  std::cout << "Group  5130904/50003 emails" << '\n';

  std::string emails[] {
  // добавлять корпоративные email здесь
  "skorohod.av@edu.spbstu.ru",
};

for (const auto & e: emails)
  {
    std::cout << e << '\n';
  }

  return 0;
}
