#include<iostream>

using namespace std;

class admin
{
};
class Shopping
{
      private:
      int S_code;
      float S_price;
      float S_discount;
      string S_name;
      public:
      void S_menu();
      void S_admin();
      void S_buyer();
      void S_add();
      void S_edit();
      void S_remove();
      void S_list();
      void S_receipt();

};
void Shopping :: S_menu()
{
      m;
      int m_choice;
      string m_email;
      int m_password;
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
      cin>>m_choice;

      switch(m_choice)
      {
            case 1:
                  cout<<"\t\t\t Please Login    \t ";
                   cout<<"\t\t\t Enter Email    \t ";
                   cin>>m_email;
                   cout<<"\t\t\t Enter Password \t ";
                   cin>>m_password;
            if(m_email = "u2023535@giki.pk" && m_password = "478652")     
            {
                  S_admin();
            }  
            else
            {
                  cout<<"Invalid Email or Password ";
            }
            break;
            case 2:
            {
                  S_buyer();
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
void Shopping::S_admin()
{
      
}
class user
{
};

int main()
{

 return 0;
}