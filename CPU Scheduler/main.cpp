#include <iostream>

#include "Timeline.hpp"
#include "firstServed.hpp"
#include "printStats.hpp"
#include "prompt.hpp"
#include "readFile.hpp"
#include "roundRobin.hpp"

int main() {
Choice choice = prompt();
  int x;
  std::cout<< "enter number of testcase:";
  std::cin >> x;
  std::vector<Process> processVec;
  switch(x) {
  case 1:
    {processVec = readFile("testcase1.txt");
    }
    break;
  case 2:
    {processVec = readFile("testcase2.txt");
   }
    break;
  default:
    {processVec = readFile("testcase3.txt");
    }
    break;
}
Timeline stats;


  switch (choice.mode) {
    case 0:
      stats = firstServed(processVec);
      printStats("outputFCFS.txt", stats);
      break;
    case 1:
      stats = roundRobin(processVec, choice.quanta);
      printStats("outputRR.txt", stats);
      break;
    default:
      break;
  }
}
