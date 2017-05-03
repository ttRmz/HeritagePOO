#ifndef DEF_STOCK
#define DEF_STOCK

#include <string>
#include <vector>

#include "Product.h"

using namespace std;


struct StockRow
{
    Product product;
    int stock;
};

class Stock
{
public:
    Stock();

    void registerProduct(string reference, string name, double price);

    void incProductStock(string reference);
    void incProductStock(string reference, int amount);
    void decProductStock(string reference);
    void decProductStock(string reference, int amount);

    bool isAvailable(string reference) const;

    vector<StockRow> getStock() const;

private:
    vector<StockRow> m_stock;
};

#endif
