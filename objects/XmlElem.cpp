#include "XmlElem.h"

//************************************
// get/set name
//***********************************/
std::string XmlElem::get_name()
{
    return name;
}

void XmlElem::set_name(std::string new_name)
{
    name = new_name;
}

//************************************
// get/set data
//***********************************/
std::string XmlElem::get_data()
{
    return data;
}

void XmlElem::set_data(std::string new_data)
{
    data = new_data;
}

//************************************
// add/get/rmv attributes
//***********************************/
void XmlElem::add_attr(XmlAttr* new_attr)
{
    attrs = (XmlAttr**) realloc(attrs, sizeof(attrs) + sizeof(XmlAttr*));
    attrs[num_attrs++] = new_attr;
}

XmlAttr* XmlElem::get_attr(int idx)
{
    if(idx < 0 || idx >= num_attrs)
    {
        return NULL;
    }
    return attrs[idx];
}

void XmlElem::rmv_attr(int idx)
{
    if(idx < 0 || idx >= num_attrs-1)
    {
        return;
    }
    for(int i=idx; i<num_attrs-1; i++)
    {
        attrs[i] = attrs[i+1];
    }
    attrs = (XmlAttr**) realloc(attrs, sizeof(attrs) - sizeof(XmlAttr*));
    num_attrs--;
}