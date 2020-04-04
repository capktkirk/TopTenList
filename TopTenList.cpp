//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"
#define fou(i,n) for(int i = 1; i <= n; i++)
#define fod(i,n) for(int i = n; i > 0; i--)
using std::string;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list[index - 1] = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list[index - 1];
}

void TopTenList::display_forward(){
    std::cout << "Programming Languages Top Ten List\n";
    fou(i,_list.size()){
        std::cout << i << ". " << get(i).text << " (" << get(i).url << ")\n";
    }
}

void TopTenList::display_backward(){
    std::cout << "Programming Languages Top Ten List\n";
    fod(i,_list.size()){
        std::cout << i << ". " << get(i).text << " (" << get(i).url << ")\n";
    }
}