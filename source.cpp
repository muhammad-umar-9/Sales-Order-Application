#include<iostream>
using namespace std;

class App
{
    public:
    App()
    {
        cout<<"\t\t\t\t  Welcome to Shoppy!";
    }
    virtual void S_menu() = 0;
    virtual void S_admin() = 0;
    virtual void  S_buyer() = 0;
    virtual void S_add() = 0;
    virtual void S_edit()= 0;
    virtual void S_remove()= 0;
    virtual void S_list()=0 ;
    virtual void S_receipt()=0 ;
};
class Shopping:public App
{
public:
    int code;
    float price;
    float discount;
    string name;

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
void Shopping ::S_menu()
{
m:
    int choice;
    string email = "u2023535@giki.pk";
    int password;
    cout << "\t\t\t\t________________________\n";
    cout << "\t\t\t\t                        \n";
    cout << "\t\t\t\t                        \n";
    cout << "\t\t\t\t Supermarket Main Menu  \n";
    cout << "\t\t\t\t                        \n";
    cout << "\t\t\t\t                        \n";
    cout << "\t\t\t\t________________________\n";
    cout << "\t\t\t\t| 1) Adminstrator      |\n";
    cout << "\t\t\t\t|                      |\n";
    cout << "\t\t\t\t| 2) Buyer             |\n";
    cout << "\t\t\t\t|                      |\n";
    cout << "\t\t\t\t| 3) Exit              |\n";
    cout << "\t\t\t\t|                      |\n";
    cout << "\t\t\t\t                        \n";
    cout << "\t\t\t\tPlease Select!";
    cin >> choice;

    switch (choice) // we use switch case here
    {
    case 1:
        cout << "\t\t\t Please Login    \t ";
        cout << "\t\t\t Enter Email    \t ";
        cin >> email;
        cout << "\t\t\t Enter Password \t ";
        cin >> password;
        if (email == "u2023535@giki.pk" && password == 478652)
        {
            S_admin();
        }
        else
        {
            cout << "Invalid Email or Password ";
        }
        break;
    case 2:
    {
        S_buyer();
        break;
    }
    case 3:
    {
        exit(0);
    }
    default:
    {
        cout << "Please Select From the Given Option ";
    }
    }
    goto m;
}

void Shopping ::S_admin()
{
    int choice;
m:
    cout << "\n\n\n\t\t\t  Adminstrator Menu";
    cout << "\n\t\t\t|_____1) Add the Product________|";
    cout << "\n\t\t\t|                               |";
    cout << "\n\t\t\t|_____2) Delete the Product_____|";
    cout << "\n\t\t\t|                               |";
    cout << "\n\t\t\t|_____3) Modify the Product_____|";
    cout << "\n\t\t\t|                               |";
    cout << "\n\t\t\t|_____4) Return Main Menu_______|";

    cout << "\n\n\t Please enter your choice ";
    cin >> choice;

    switch (choice)
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
        return;
    default:
        cout << "Please Select From the Given Option ";
        goto m;
    }
}

void Shopping ::S_buyer()
{
    int choice;
    cout << "\t\t\t  Buyer \n";
    cout << "\t\t\t__________________ \n";
    cout << "                         \n";
    cout << "\t\t\t1) Buy product     \n";
    cout << "                         \n";
    cout << "\t\t\t2)  GO Back        \n";

m:
    cout << "\n\n\t Please enter your choice ";
    cin >> choice;

    switch (choice)
    {

    case 1:
        S_receipt();
        break;

    case 2:
        return;

    default:
        cout << "Please Select From the Given Option ";
        goto m;
    }
}
void Shopping ::S_add()
{
m:
    fstream data;
    int c;
    int token = 0;
    float p;
    float d;
    string n;
    cout << "\n\n\t\t Add new product";
    cout << "\n\n\t Product code of the product ";
    cin >> code;
    cout << "\n\n\t Name of product ";
    cin >> name;
    cout << "\n\n\t Price of product ";
    cin >> price;
    cout << "\n\n\t Discount on product ";
    cin >> discount;
    data.open("database.txt", ios::in);
    if (!data)
    {
        data.open("database.txt", ios::app | ios::out);
        data << " " << code << " " << name << " " << price<< " " << discount << "\n";
        data.close();
    }
    else
    {
        data >> c >> n >> p >> d;
        while (!data.eof())
        {
            if (c == code)
            {
                token++;
                break;
            }
            data >> c >> n >> p >> d;
        }
        data.close();

        if (token == 1)
        {
            goto m;
        }
        else
        {
            data.open("database.txt", ios::app | ios::out);
            data << " " << code << " " << name << " " << price<< " " << discount << "\n";
            data.close();
        }
    }
    cout << "\n\n\t\t Record inserted ! ";
}

void Shopping ::S_edit()
{
    fstream data, data1;
    int key;
    int token = 0;
    int c;
    float p;
    float d;
    string n;
    cout << "\n\t\t\t Modify the Record";
    cout << "\n\t\t\t Product code: ";
    cin >> key;

    data.open("database.txt", ios::in); // checking the file if it exists
    if (!data)
    {
        cout << "\n\nFile doesnt Exist";
    }
    else // open the file but not sameone rather the other
    {
        data1.open("database1.txt", ios::app | ios::out); // saving edited data into this file and renaming it to orignal file.
        data >> code >> name >> price >> discount;
        while (!data.eof()) // checkimg each and every content of the file
        {
            if (key == code)
            {
                cout << "\n\t\tProduct new Code: ";
                cin >> c;
                cout << "\n\t\tName of the Product: ";
                cin >> n;
                cout << "\n\t\tPrice of the Product: ";
                cin >> p;
                cout << "\n\t\tDiscount: ";
                cin >> d;
                data1 << " " << c << " " << n << " " << p << " " << d << "\n";
                cout << "\n\n\t\t Record edited ";
                token++;
            }
            else // if product doesnt matches with product key in the file
            {
                data1 << " " << code << " " << name << " " << price << " " << discount << "\n";
            }
            data >> code >> name >> price >> discount; // old variables
        }
        data.close(); // fle closing.
        data1.close();

        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\nRecord not found sorry";
        }
    }
}

void Shopping ::S_remove()
{
    fstream data, data1;
    int key;
    int token = 0;
    int c;
    float p;
    float d;
    string n;
    cout << "\n\t\t\t Delete Product: ";
    cout << "\n\t\t\t Product code: ";
    cin >> key;

    data.open("database.txt", ios::in); // checking the file if it exists
    if (!data)
    {
        cout << "\n\nFile doesnt Exist";
    }
    else // open the file but not sameone rather the other
    {
        data1.open("database1.txt", ios::app | ios::out); // saving data into this file and renaming it to orignal file.
        data >> code >> name >> price >> discount;
        while (!data.eof()) // checkimg each and every content of the file
        {
            if (code == key) // if product by admnstor matches then the product will be removed
            {
                cout << "\n\n\t\t Product deleted successfully";
                token++;
            }
            else
            {
                data1 << " " << code << " " << name << " " << price << " " << discount << "\n";
            }
            data >> code >> name >> price >> discount;
        }
        data.close();
        data1.close();
        remove("database.txt");
        rename("database1.txt", "database.txt");

        if (token == 0)
        {
            cout << "\n\n Record not found sorry";
        }
    }
}

void Shopping::S_list()
{
    fstream data;
    data.open("database.txt", ios::in);
    cout << "\n\n_\n";
    cout << "ProNo\t\tNAMe\t\tPrice\n";
    data >> code >> name >> price >> discount;
    while (!data.eof())
    {
        cout << code << "\t\t" << name << "\t\t" << price << "\n";
        data >> code >> name >> price >> discount;
    }
    data.close();
}

void Shopping::S_receipt()
{
    fstream data;
    int arr_c[100];
    int arr_q[100];
    char choice;
    int c = 0;
    float total = 0;

    cout << "\n\n\t\t\t\t Receipt ";
    data.open("database.txt", ios::in); // open this file in reading mode

    if (!data) // if data does not exist
    {
        cout << "Empty Data Base ";
        return;
    }

    // Display product list
    S_list();

    cout << "\n_\n";
    cout << "\n|                                            |\n";
    cout << "\n      Please Place The Order                  \n";
    cout << "\n|                                            |\n";
    cout << "\n__\n";

    // Loop to allow multiple purchases
    do
    {
    m:
        cout << "\n\n Enter Product Code : ";
        cin >> arr_c[c];
        cout << "\n\n Enter Quantity :     ";
        cin >> arr_q[c];

        // Check for duplicate product codes
        for (int i = 0; i < c; i++)
        {
            if (arr_c[c] == arr_c[i])
            {
                cout << "\n\n\n Duplicate Product code. please try again! ";
                goto m;
            }
        }

        // Ask user if they want to buy another product
        cout << "\n\n Do you want to buy another product or not? If (yes) press Y else (No) N: ";
        cin >> choice;

        c++; // Increment counter outside of the loop
    } while (choice == 'y' || choice =='Y');

    // Print receipt header
    cout << "\n\n\t\t\t__RECEIPT\n";
    cout << "\nProduct No \t Product Name \t Product Quantity \t Price \t\t Amount \t Amount With Discount\n";

    // Calculate total amount and print receipt details
    for (int i = 0; i < c; i++)
    {
        data.clear(); // clear the end-of-file flag
        data.seekg(0, ios::beg); // Reset file pointer to the beginning

        while (data >> code >> name >> price >> discount)
        {
            if (code == arr_c[i])
            {
                float amount = price * arr_q[i];
                float discountedAmount = amount - (amount * discount / 100);
                total += discountedAmount;
                cout << code << "\t\t" << name << "\t\t" << arr_q[i] << "\t\t\t " << price << "\t\t" << amount << "\t\t " << discountedAmount << endl;
            }
        }
    }

    data.close(); // Close the file after use

    cout << "\n\nTotal Amount: " << total << endl;
}