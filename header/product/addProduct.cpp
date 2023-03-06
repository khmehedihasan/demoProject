#include<iostream>
#include <string>
using namespace std;

    struct pdt{
        int id;
        int purchasePrice;
        int salePrice;
        int inStock;
        string date;
        string nnm;

        struct pdt *next;
    };

    typedef struct pdt Product;

    Product* getPNode(){
        Product* newnode;
        newnode = (Product *) malloc(sizeof(Product));

        newnode->id = 1;
        newnode->nnm = "10/12/2022";
        newnode->purchasePrice = 100;
        newnode->salePrice = 120;
        newnode->date = "mehedi";

        newnode->next = NULL;

        return(newnode);

    }

int main(){

    //string name;
    //getline(cin,name);

    Product* newnode;
    newnode = getPNode();

    cout<<newnode->date;
    return 0;
}
