#include <cstdio>

#include <regex>
#include <string>


void TestRe() {
  std::wstring launchParams(L"kkk skdjf j k3k33333");
  std::wregex reg{ LR"([\d]+)" };
  std::wsmatch m;
  std::regex_search(launchParams, m, reg);
  auto a = m.begin()->str();
  wprintf(L"%s\n",a);
}

int main() {
  TestRe();
  printf("hello wolrd\n");
  return 0;
}