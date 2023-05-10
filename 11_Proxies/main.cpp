#include "GumballMachine.h"
#include "GumballMonitor.h"

#include <memory>
#include <string>
#include <iostream>

int main()
{

  int count = 112;
  std::string name = "Seattle";

  // std::cin >> name;
  // std::cin >> count;

  std::shared_ptr<GumballMachine> gMachine = std::make_shared<GumballMachine>(GumballMachine(count, name));
  GumballMonitor monitor(gMachine);

  monitor.report();
  return 0;
}