#include<iostream>

using namespace std;

class admin
{
};
class Shopping
{
    private:
        int S_code;//mmm
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
      m:
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
<<<<<<< HEAD
void Shopping :: S_admin()
=======
void Shopping::S_admin()
{
      
}
class user
>>>>>>> fca54a6fdab1656e059438f68c57aafa95973273
{
    int choice;
    cout<<"\n\n\n\t\t\t  Adminstrator Menu";
    cout<<"\n\t\t\t|_____1) Add the Product________|";
    cout<<"\n\t\t\t|                               |";
    cout<<"\n\t\t\t|_____2) Delete the Product_____|";
    cout<<"\n\t\t\t|                               |";
    cout<<"\n\t\t\t|_____3) Modify the Product_____|";
    cout<<"\n\t\t\t|                               |";
    cout<<"\n\t\t\t|_____4) Return Main Menu_______|";
    m:
        cout<<"\n\n\t Please enter your choice ";
        cin>>choice;

        switch(choice)
        {

            case 1:
                S_add();
                break;
            case 2:
                S_remove();
                break;
            case 3:
                S_edit();
                break;
            case 4:
                S_menu();
                break;
            default:
                cout<<"Please Select From the Given Option ";
                goto m;
        }
}

void Shopping :: S_buyer()
{
    int choice;
    cout<<"\t\t\t  Buyer \n";
    cout<<"\t\t\t__________________ \n";
    cout<<"                         \n";
    cout<<"\t\t\t1) Buy product     \n";
    cout<<"                         \n";
    cout<<"\t\t\t2)  GO Back        \n";

    m:
        cout<<"\n\n\t Please enter your choice ";
        cin>>choice;

        switch(choice)
        {

            case 1:
                S_receipt();
                break;

            case 2:
                S_menu();
                break;

            default:
                cout<<"Please Select From the Given Option ";
                goto m;
        }
}
void shopping :: s_add(){
    fstream data;
    int c;
    int token=0; 
    float p;
    float d;
    string n;.
    cout<<"\n\n\t\t Add new product";
    cout<<"\n\n\t Product code of the product ";
    cin>>pcode;
    cout<<"\n\n\t Name of product ";
    cin>>pname;
    cout<<"\n\n\t Price of product ";
    cin>>price;
    cout<<"\n\n\t Discount on product ";
    cin>>dis;
    data.open("database.txt,ios::in");
    if(!data0)
    {
       data.open("database.txt,ios::app|ios::out");
       data<<" "<<pcode<<" "<<pname<<" "<<price<<dis<<"\n";
       data.close();
    }
    else{
        data>>c>>n>>p>>d;
        while(!data.eof())
        {
            if(c==pcode)
            {
                token++;
            }
            data>>a>>c>>n>>p>>d;

        }
        data.close();
    
    if(token==1){
        goto m;}
        else{
            data.open("database.txt,ios::app|ios::out");
            data<<" "<<pcode<<" "<<pname<<" "<<price<<dis<<"\n";
            data.close();
        }
    }
    cout<<"\n\n\t\t Record inserted ! ";
    
}

int main()
{

 return 0;
}