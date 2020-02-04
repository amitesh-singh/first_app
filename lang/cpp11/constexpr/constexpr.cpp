#include <iostream>

using namespace std;

#define GPIOC 1
#define GPIO13 1 << 13

class Pin
{
public:
  //const expr constructor must have empty function body
  constexpr Pin(uint16_t ddr, uint16_t port): _ddr(ddr), _port(port)
  {
  }
  uint16_t _ddr, _port;
};

constexpr double PI()
{
   return 3.14;
}

int main()
{
  Pin pin(GPIOC, GPIO13);

  cout << pin._ddr << ":" << pin._port << std::endl;

 constexpr int len = 10;
  constexpr int len_2 = len + 1;
  
  cout << PI() << endl;
  
  return 0;
}
