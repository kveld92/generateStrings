#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <ctime>

template <typename T>
std::vector<T> genStrings(std::vector<T> possibilities, int size){
  std::vector<T> items;
  for(int i = 0; i < size; ++i)
    items.push_back(possibilities[std::rand() % possibilities.size()]);
  return items;
}
int countItem(std::vector<std::string> itemList, std::string item){
  int nItem = 0;
  for(std::string i : itemList)
      if(i == item) nItem++;
  return nItem;
}
int main(){
  srand(time(NULL));
  std::vector<std::string> coinPossibilities = {"heads", "tails"};
  std::vector<std::string> coinList = genStrings(coinPossibilities, 100);
  int nTails = countItem(coinList, "tails"),
      nHeads = countItem(coinList, "heads");

  std::cout << "Tails: " << nTails
            << "\nHeads: " << nHeads
            << std::endl;
  return 0;
}
