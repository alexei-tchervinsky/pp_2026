#include <iostream>
#include <string>

int main()
{
  std::cout << "Group  5130904/50003 emails" << '\n';

  std::string emails[] {
  // добавлять корпоративные email здесь
  "koropov.vo@edu.spbstu.ru",
  "chervinskij_ap@spbstu.ru",
  "tsuremichev.ga@edu.spbstu.ru",
  "barzhin.yaa@edu.spbstu.ru",
};

  for (const auto &e : emails)
  {
    std::cout << e << '\n';
  }

  return 0;
}
