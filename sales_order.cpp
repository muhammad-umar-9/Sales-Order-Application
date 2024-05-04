#include<iostream>

using namespace std;

class admin
{
};
class Shopping
{
      private:
      int code;
      float price;
      float discount;
      string name;
      public:
      void menu();
      void admin();
      void buyer();
      void add();
      void edit();
      void remove();
      void list();
      void receipt();

};
void Shopping :: menu()
{
      m;
      int choice;
      string email;
      int password;
      cout<<"\t\t\t\t________________________\n";
      cout<<"\t\t\t\t                        \n";
      cout<<"\t\t\t\t                        \n";
      cout<<"\t\t\t\t Supermarket Main Menu  \n";
      cout<<"\t\t\t\t                        \n";
      cout<<"\t\t\t\t                        \n";
      cout<<"\t\t\t\t________________________\n";
      cout<<"\t\t\t\t| 1) Adminstrator      |\n";
      cout<<"\t\t\t\t|                      |\n";
      cout<<"\t\t\t\t| 2) Buyer             |\n";
      cout<<"\t\t\t\t|                      |\n";
      cout<<"\t\t\t\t| 3) Exit              |\n";
      cout<<"\t\t\t\t|                      |\n";
      cout<<"\t\t\t\t                        \n";
      cout<<"\t\t\t\tPlease Select!";
      cin>>choice;

      switch(choice)
      {
            case 1:
                  cout<<"\t\t\t Please Login    \t ";
                   cout<<"\t\t\t Enter Email    \t ";
                   cin>>email;
                   cout<<"\t\t\t Enter Password \t ";
                   cin>>password;
            if(email = "u2023535@giki.pk" && password = "478652")     
            {
                  admin();
            }  
            else
            {
                  cout<<"Invalid Email or Password ";
            }
            break;
            case 2:
            {
                  buyer();
            }
            case 3:
            {
                  exit(0);
            }
            default:
            {
                  cout<<"Please Select From the Given Option ";
            }


      }
      goto m;


}

class user
{
};

int main()
{

 return 0;
}