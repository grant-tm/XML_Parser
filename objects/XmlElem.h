#ifndef XmlElem_h
#define XmlElem_h

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "XmlAttr.h"

class XmlElem
{
    private:
        // data
        std::string name;
        std::string data;

        int num_attrs;
        XmlAttr** attrs;

    public:
        // member functions
        std::string get_name();
        void set_name(std::string new_name);

        std::string get_data();
        void set_data(std::string new_data);

        void add_attr(XmlAttr* attr);
        XmlAttr* get_attr(int idx);
        void rmv_attr(int idx);
};

#endif