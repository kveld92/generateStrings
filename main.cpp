#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <ctime>

std::vector<std::string> generateStrings(std::vector<std::string> possibilities, int size){
  std::vector<std::string> stringList;
  for(int i = 0; i < size; ++i)
    stringList.push_back(possibilities[std::rand() % possibilities.size()]);
  return stringList;
}

int countItem(std::vector<std::string> itemList, std::string item){
  int nItem = 0;
  for(std::string i : itemList)
      if(i == item) nItem++;
  return nItem;
}

int main(){
  srand(time(NULL));
  std::vector<std::string> coinList = generateStrings({"heads", "tails"}, 100);
  int nTails = countItem(coinList, "tails"),
      nHeads = countItem(coinList, "heads");

  std::cout << "Tails: " << nTails
            << "\nHeads: " << nHeads
            << std::endl;
  return 0;
}
