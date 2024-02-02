#ifndef XmlElemTree_h
#define XmlElemTree_h

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "XmlElem.h"

class XmlElemTree
{
    private:
        XmlElemTree* parent;
        XmlElem* elem;
        
        int num_children;
        XmlElemTree** children;

    public:
        void set_parent(XmlElemTree*);
        XmlElemTree* get_parent();

        void set_elem(XmlElem*);
        XmlElem* get_elem();

        void add_child(XmlElemTree*);
        XmlElemTree* get_child(int idx);
        void rmv_child(int idx);
};

#endif