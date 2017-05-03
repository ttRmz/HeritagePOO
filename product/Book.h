#ifndef DEF_BOOK
#define DEF_BOOK

#include <iostream>
#include <string>
#include "Product.h"

class Book : public Product
{
public:
    string getISBN();

private:
    string m_isbn;
};

#endif
