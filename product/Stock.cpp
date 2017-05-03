#include "Stock.h"
#include "Product.h"

#include <string>

using namespace std;

Stock::Stock()
{
    // todo
}

void Stock::registerProduct(string reference, string name, double price)
{
    StockRow row;
    row.product.setReference(reference);
    row.product.setName(name);
    row.product.setPrice(price);
    row.stock = 0;
    m_stock.push_back(row);
}

void Stock::incProductStock(string reference)
{
    // todo
}

void Stock::incProductStock(string reference, int amount)
{
    // todo
}

void Stock::decProductStock(string reference)
{
    // todo
}
void Stock::decProductStock(string reference, int amount)
{
    // todo
}

bool Stock::isAvailable(string reference) const
{
    return false;
}


vector<StockRow> Stock::getStock() const
{
    return m_stock;
}

