#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/*
gives a name price and count to item in inventory
*/
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
gives the option to sell
*/
void Inventory::sell()
{
  if(m_in_stock >= 1)
  {
    m_in_stock--;
  }
  else
  {
    std::cout<<"Sorry, that item is out of stock"<<std::endl;
  }
}
/*
operator to sell
*/
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
