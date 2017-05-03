#ifndef DEF_PRODUCT
#define DEF_PRODUCT

#include <string>

class Product
{
public:
    Product();

    void setReference(std::string value);
    std::string getReference() const;

    void setPrice(double value);
    double getPrice() const;

    void setName(std::string value);
    std::string getName() const;

private:
    double m_price;
    std::string m_name;
    std::string m_reference;
};

#endif
