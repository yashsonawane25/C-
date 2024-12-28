#include <iostream>
using namespace std;

class Book
{
public:
    char name;
    int price;
    int noOfPages;
    int countBook(int p)
    {
        if (price < p)
            return 1;
        else
            return 0;
    }
    bool isBookPresent(char book)
    {
        if (name == book)
            return true;
        else
            return false;
    }
};


int main(){
    Book harryPotter;
    harryPotter.name= 'H';
    harryPotter.price = 1000;
    harryPotter.noOfPages = 150;
    cout<<harryPotter.countBook('B');
}