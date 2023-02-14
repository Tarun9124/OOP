#include<iostream>
using namespace std;
class book_library
{
  int book_id;
  char book_name[20];
  char author_name[20];
  int stock;
  float price;
  public :
      void init_stock()
      {
          cout<<"Enter Book ID:";
          cin>>book_id;
          cout<<"Enter Book Name:";
          cin>>book_name;
          cout<<"Enter Author Name:";
          cin>>author_name;
          stock = 5;
          cout<<"Enter Price :";
          cin>>price;
      }
      void order()
      {
         cout<<"Enter Book Name:";
         cin>>book_name;
         cout<<"Enter Book Author's Name:";
         cin>>author_name;
         cout<<"Enter Stock:";
         cin>>stock;
      }
      void display()
      {
          cout<<book_id<<"\t"<<book_name<<"\t"<<stock<<endl;
      }
};
int main()
{
    book_library c[5];
    book_library orderbook;
    for(int i=0;i<2;i++)
    {
       c[i].init_stock();
    }
    do
    {
        int ch;
        cout<<"1)Display"<<endl<<"2)Order"<<endl<<"3)Exit"<<endl;
        cout<<"Enter Choice :";
        cin>>ch;
        switch(ch)
        {
        case 1:
               cout<<"Book ID\tBook_Name\tStock"<<endl;
               for(int i=0;i<2;i++)
                c[i].display();
               break;
        case 2:
               orderbook.order();
               cout<<"Ordered Successfully"<<endl;
               break;
        default:
                exit(0);
                break;
        }
    }while(1);
    return 0;
}
