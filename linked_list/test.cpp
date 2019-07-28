#include "Linked_list.h"
#include <iostream>
using namespace std;
void TestPush(){
    auto lk = Linked_list();
    lk.push(135656);
    if (lk.Head->Next->value == 135656){
        cout<<"------TestPush v1------"<<endl;
        cout<<"---------ok---------"<<endl;
        cout<<endl;
    }
    else{
        cout<<"------TestPush v1------"<<endl;
        cout<<"-------failed-------"<<endl;
        cout<<endl;
    }

    lk.push(0);
    if (lk.Head->Next->value == 0){
        cout<<"------TestPush v2------"<<endl;
        cout<<"---------ok---------"<<endl;
        cout<<endl;
    }
    else{
        cout<<"------TestPush v2------"<<endl;
        cout<<"-------failed-------"<<endl;
        cout<<endl;
    }

}

int main() {
    TestPush();
     return 0;
}