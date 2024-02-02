#include "XmlAttr.h"

//************************************
// get/set name
//***********************************/
std::string XmlAttr::get_name()
{
    return name;
}

void XmlAttr::set_name(std::string new_name)
{
    name = new_name;
}

//************************************
// get/set data
//***********************************/
std::string XmlAttr::get_data()
{
    return data;
}

void XmlAttr::set_data(std::string new_data)
{
    data = new_data;
}