#include "Product.h"

#include <string>

using namespace std;

Product::Product()
{
    m_price = 0.0;
}

void Product::setPrice(double value)
{
    m_price = value;
}

double Product::getPrice() const
{
    return m_price;
}

void Product::setName(string value)
{
    m_name = value;
}

string Product::getName() const
{
    return m_name;
}

void Product::setReference(string value)
{
    m_reference = value;
}

string Product::getReference() const
{
    return m_reference;
}
