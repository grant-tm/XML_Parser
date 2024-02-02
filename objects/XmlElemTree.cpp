#include "XmlElemTree.h"

//************************************
// get/set parent
//***********************************/
void XmlElemTree::set_parent(XmlElemTree* new_parent)
{
    parent = new_parent;
}

XmlElemTree* XmlElemTree::get_parent()
{
    return parent;
}

//************************************
// get/set element
//***********************************/
void XmlElemTree::set_elem(XmlElem* new_elem)
{
    elem = new_elem;
}

XmlElem* XmlElemTree::get_elem()
{
    return elem;
}

//************************************
// add/get/rmv child
//***********************************/
void XmlElemTree::add_child(XmlElemTree* new_child)
{
    new_child->set_parent(this);
    children = (XmlElemTree**) realloc(children, sizeof(children) + sizeof(XmlElemTree*));
    children[num_children++] = new_child;
}

XmlElemTree* XmlElemTree::get_child(int idx)
{
    if(idx < 0 || idx >= num_children)
    {
        return NULL;
    }
    return children[idx];
}

void XmlElemTree::rmv_child(int idx)
{
    if(idx < 0 || idx >= num_children-1)
    {
        return;
    }
    for(int i=idx; i<num_children-1; i++)
    {
        children[i] = children[i+1];
    }
    children = (XmlElemTree**) realloc(children, sizeof(children) - sizeof(XmlElemTree*));
    num_children--;
}