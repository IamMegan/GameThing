#include <string>
#include <map>

typedef struct{
  std::string name;
  int color;
  float density, meltingPoint, boilingPoint, bulkMod;
  bool isMetal, isFerromagnetic, isRadioactive;
}element;

typedef struct{
  std::string name;
  int color;
  float density, meltingPoint, boilingPoint, bulkMod;
  std::map<std::string, element> elements;
}compound;
