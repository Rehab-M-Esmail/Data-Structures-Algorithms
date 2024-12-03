#include <iostream>
using namespace std;
#include "linkedList.h"
#include <list>
int main() {
    linkedList<int> list;
    list.insertBegin(5);
    list.insertBegin(10);
    list.Traverse();
    cout<<endl;
    list.insertBefore(10,1);
    list.Traverse();
    cout<<endl;
    list.insertEnd(20);
    list.Traverse();
    cout<<endl;
    list.Delete(5);
    list.Traverse();
    cout<<endl;
    list.Modify(1,0);
    list.Traverse();
    cout<<endl;
    list.Reverse();
    list.Traverse();
    cout<<endl;
    //list.deleteAll();



    return 0;
}
