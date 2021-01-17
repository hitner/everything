#include <cstdio>

#include <regex>
#include <string>

#include <initializer_list>

void TestRe() {
  std::wstring launchParams(L"kkk skdjf j k3k33333");
  std::wregex reg{ LR"([\d]+)" };
  std::wsmatch m;
  std::regex_search(launchParams, m, reg);
  auto a = m.begin()->str();
  wprintf(L"%s\n",a);
}

#define TEST_TYPE double *

struct TestInitList {
  std::string foo;
  int bar;
  double name;
  char * kk;
  std::wstring go;
};

int main() {
  auto a = { "sdf","sdkfkk","kkk" };

  auto b = { 1,2,3,4 };
  for (auto item : b) {
    printf("kk%d\n", item);
  }
  
  TestInitList ta = { "33",3,5.4,"kk",L"10" };
  int bb[5]={ 1,2,3,4,};

  TEST_TYPE  begin = (TEST_TYPE)0x1238800;
  TEST_TYPE  end = (TEST_TYPE)0x1238810;
  int size = end - begin;


  TestRe();
  printf("hello wolrd\n");

  

  return 0;
}