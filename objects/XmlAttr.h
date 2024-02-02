#ifndef XmlAttr_h
#define XmlAttr_h

#include <stdlib.h>
#include <stdio.h>
#include <string>

class XmlAttr
{
    private:
        std::string name;
        std::string data;
    
    public:
        std::string get_name();
        void set_name(std::string new_name);

        std::string get_data();
        void set_data(std::string new_data);
};

#endif