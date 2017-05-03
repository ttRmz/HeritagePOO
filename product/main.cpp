#include <iostream>

#include "Product.h"
#include "Stock.h"

int main()
{
    Stock stock;
    int i;

    stock.registerProduct("978-2100715770", "Le langage C - 2e éd - Norme ANSI", 29.90);
    stock.registerProduct("979-1090085916", "Programmez avec le langage C++", 32.0);
    stock.registerProduct("CD-EMOTION-JUL", "Emotions - JUL", 0.01);

    for (i = 0; i < 100; ++i)
    {
        stock.incProductStock("978-2100715770");
    }

    stock.incProductStock("979-1090085916", 200);

    stock.decProductStock("978-2100715770", 42);

    vector<StockRow> items = stock.getStock();
    for (i = 0; i < items.size(); ++i)
    {
        cout << items[i].product.getName() << " | " << items[i].stock << endl;
    }

}

