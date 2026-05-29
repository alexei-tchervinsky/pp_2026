#include <iostream>
#include <string>

int main()
{
  std::cout << "Group  5130904/50003 emails" << '\n';

  std::string emails[] {
  // добавлять корпоративные email здесь
  "egorova.di@edu.spbstu.ru"
  "ryzlejtseva.oe@edu.spbstu.ru",
  "golovach.ya@edu.spbstu.ru",
  "kabishev.da@edu.spbstu.ru",
  "altynbaeva.af@edu.spbstu.ru",
  "usmanov.di@edu.spbstu.ru",
  "fomina.vk@edu.spbstu.ru",
  "volkov.av@spbstu.ru",
  "malevanaya.ms@edu.spbstu.ru",
  "yuriev.dl@edu.spbstu.ru",
  "koropov.vo@edu.spbstu.ru",
  "chervinskij_ap@spbstu.ru",
  "tsuremichev.ga@edu.spbstu.ru",
  "tomilova2.em@edu.spbstu.ru",
  "barzhin.yaa@edu.spbstu.ru",
  "rtitshev.gs@edu.spbstu.ru",
};

for (const auto & e: emails)
  {
    std::cout << e << '\n';
  }

  return 0;
}

