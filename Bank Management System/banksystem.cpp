#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void showTitle()
{
    char titleShow[] = {'B', 'A', 'N', 'K', ' ', 'M', 'A', 'N', 'A', 'G', 'E', 'M', 'E', 'N', 'T',
    ' ', 'S', 'Y', 'S', 'T', 'E', 'M'};
    cout<<"\n\n\n\n\n\n\t\t\t";
    for (int i = 0; i < 25; i++)
    {
        cout<<titleShow[i];
        Sleep(500);
    }

}

void options()
{
    cout<<"\n";
    cout<<"Press...\n";
    cout<<"1. Create New Account\n";
    cout<<"2. Update Existing Account\n";
    cout<<"3. Details of Existing Account\n";
    cout<<"4. Transactions\n";
    cout<<"5. Remove Existing Account\n";
    cout<<"6. View List of Customers\n";
    cout<<"7. Quit\n\n";
}


class Bank{
    private:
    string arr1[20];
    string arr2[20];
    int arr3[20];
    string arr4[20];
    string arr5[20];
    string arr6[20];
    int arr7[20];
    int a;

    public:
    Bank()
    {
        a = 0;
    }

    void data(int num)
    {
        if(num==1)
        {
            int NumOfAccounts = 0;

            cout<<"How many Accounts would you like to create?\n";
            cin>>NumOfAccounts;

            if(a==0)
            {
                a += NumOfAccounts;

                for(int i=0; i<NumOfAccounts; i++)
                {
                    cout<<"\n\t-------Enter Information-------\n\n";

                    cout<<"Enter name of account holder: \n";
                    cin>>arr1[i];

                    cout<<"Enter last name of account holder: \n";
                    cin>>arr2[i];

                    cout<<"Enter phone number of account holder: \n";
                    cin>>arr3[i];

                    cout<<"Enter email address of account holder: \n";
                    cin>>arr4[i];

                    cout<<"Enter username of account holder: \n";
                    cin>>arr5[i];

                    cout<<"Enter password of account holder: \n";
                    cin>>arr6[i];

                    cout<<"Transaction: ";
                    cin>>arr7[i];

                }

                cout<<"Creating New Account...";
                cout<<"Please wait...";

                for(int i=0; i<5; i++)
                {
                    cout<<".";
                    Sleep(500);
                }

                Sleep(500);
                system("CLS");
                cout<<"New Account Created\n";
            }

            else{

                for(int i=a; i<a+NumOfAccounts; i++)
                {
                    cout<<"\n\t-------Enter Information-------\n\n";

                    cout<<"Enter name of account holder: ";
                    cin>>arr1[i];

                    cout<<"Enter last name of account holder: ";
                    cin>>arr2[i];

                    cout<<"Enter phone number of account holder: ";
                    cin>>arr3[i];

                    cout<<"Enter email address of account holder: ";
                    cin>>arr4[i];

                    cout<<"Enter username of account holder: ";
                    cin>>arr5[i];

                    cout<<"Enter password of account holder: ";
                    cin>>arr6[i];

                    cout<<"Transaction: ";
                    cin>>arr7[i];

                }

                cout<<"Creating New Account...";
                cout<<"Please wait...";

                for(int i=0; i<5; i++)
                {
                    cout<<".";
                    Sleep(500);
                }

                Sleep(3000);
                system("CLS");
                cout<<"New Account Created\n";
                a += NumOfAccounts;
            }
        }

        else if(num==2)
        {
            if(a==0)
            {
                cout<<"No information was entered";
            }
            else{

                string username;

                cout<<"Enter Username which you wish update\n";
                cin>>username;

                for(int i=0; i<a; i++)
                {
                    if(username == arr5[i])
                    {
                        cout<<"\t\n-------Old Information-------\n\n";

                        cout<<"Name: "<<arr1[i]<<endl;
                        cout<<"Last Name: "<<arr2[i]<<endl;
                        cout<<"Phone Number: "<<arr3[i]<<endl;
                        cout<<"Email Address: "<<arr4[i]<<endl;
                        cout<<"Username: "<<arr5[i]<<endl;
                        cout<<"Password: "<<arr6[i]<<endl;
                        cout<<"Transaction: "<<arr7[i]<<endl;
                        cout<<endl;

                        cout<<"Name: ";
                        cin>>arr1[i];

                        cout<<"Last Name: ";
                        cin>>arr2[i];

                        cout<<"Phone Number: ";
                        cin>>arr3[i];

                        cout<<"Email Address: ";
                        cin>>arr4[i];

                        cout<<"Username: ";
                        cin>>arr5[i];

                        cout<<"Password: ";
                        cin>>arr6[i];

                        cout<<"Transaction: ";
                        cin>>arr7[i];
                    }
                }
                
            }
        }
        else if(num==3) {
            if(a==0)
            {
                cout<<"No information was entered";
            }
            else{

                string username;
                cout<<"Enter Username: \n";
                cin>>username;

                for(int i=0; i<a; i++)
                {
                    if(username==arr5[i])
                    {
                        cout<<"\t\n-------Information-------\n\n";

                        cout<<"Name: "<<arr1[i]<<endl;
                        cout<<"Last Name: "<<arr2[i]<<endl;
                        cout<<"Phone Number: "<<arr3[i]<<endl;
                        cout<<"Email Address: "<<arr4[i]<<endl;
                        cout<<"Username: "<<arr5[i]<<endl;
                        cout<<"Password: "<<arr6[i]<<endl;
                        cout<<"Transaction: "<<arr7[i]<<endl;
                    }
                }
            }
        }
        else if(num==4)
        {
            if(a==0)
            {
                cout<<"No information was entered";
            }
            else{

                string username;
                cout<<"Enter username of account you wish to perform transaction: \n";
                cin>>username;

                for(int i=0; i<a; i++)
                {
                    if(username == arr5[i])
                    {
                        cout<<"\t\n-------Information-------\n\n";

                        cout<<"Name: "<<arr1[i]<<endl;
                        cout<<"Last Name: "<<arr2[i]<<endl;
                        cout<<"Phone Number: "<<arr3[i]<<endl;
                        cout<<"Email Address: "<<arr4[i]<<endl;
                        cout<<"Username: "<<arr5[i]<<endl;
                        cout<<"Password: "<<arr6[i]<<endl;
                        cout<<"Transaction: "<<arr7[i]<<endl;
                    }
                }
                int press;
                cout<<"Press 1 for deposit\n";
                cout<<"Press 1 for withdrawal\n";
                cin>>press;

                if(press == 1)
                {
                    for(int i=0; i<a; i++)
                    {
                        if(username == arr5[i])
                        {
                            int money;
                            int balance = 0;

                            cout<<"Available Balance: "<<arr7[i]<<"\n";
                            cout<<"Enter amount to deposit: \n";
                            cin>>money;

                            balance = arr7[i] + money;
                            arr7[i] = balance;

                            cout<<"\n"<<money<<"naira deposited to account\n\n";

                        }
                    }
                }
                else if(press == 2)
                {
                    for(int i=0; i<a; i++)
                    {
                        if(username == arr5[i])
                        {
                            int money;
                            int balance = 0;

                            cout<<"Available Balance: "<<arr7[i]<<"\n";
                            cout<<"Enter amount to deposit: \n";
                            cin>>money;

                            balance = arr7[i] - money;
                            arr7[i] = balance;

                            cout<<"\n"<<money<<"naira deposited to account\n\n";

                        }
                    }
                }
                else{
                    cout<<"Invalid Input\n";
                }
            }
        }
        else if(num == 5)
        {
            if(a==0)
            {
                cout<<"No information was entered";
            }
            else{
                int p;
                cout<<"Press 1 to delete specific record\n";
                cout<<"Press 2 to delete ALL records\n";

                if(p==1)
                {
                    string username;
                    cout<<"Enter username of account you wish to delete: \n";
                    cin>>username;

                    for(int i=0; i<a; i++)
                    {
                        if(username == arr5[i])
                        {
                            for(int j=i; j<a; j++)
                            {
                                arr1[j] = arr1[j+1];
                                arr2[j] = arr2[j+1];
                                arr3[j] = arr3[j+1];
                                arr4[j] = arr4[j+1];
                                arr5[j] = arr5[j+1];
                                arr6[j] = arr6[j+1];
                                arr7[j] = arr7[j+1];
                            }
                            a--;
                            cout<<"Required record deleted..!!!\n";
                        }
                    }
                }
                else if(p == 2)
                {
                    a = 0;
                    cout<<"All records deleted\n";
                }
                /*else{
                    cout<<"Invalid Input\n";
                }*/
            }
        }
        else if(num == 6)
        {
            if(a==0)
            {
                cout<<"No information was entered";
            }
            else{
                cout<<"\t\n-------Information-------\n\n";

                for(int i=0; i<a; i++)
                {
                    cout<<"\nData of Person "<<i+1<<"\n\n";
                    cout<<"Name: "<<arr1[i]<<"\n";
                    cout<<"Last Name: "<<arr2[i]<<"\n";
                    cout<<"Phone Number: "<<arr3[i]<<"\n";
                    cout<<"Email Address: "<<arr4[i]<<"\n";
                    cout<<"Username: "<<arr5[i]<<"\n";
                    cout<<"Password: "<<arr6[i]<<"\n";
                    cout<<"Transaction: "<<arr7[i]<<"\n";
                }
            }
        }
        else if(num == 7)
        {
            cout<<"Thank you..!!!\n";
            exit(0);
        }
        else{
            cout<<"Invalid Input\n";
        }
    }
};


main()
{
    showTitle();
    Bank Chase;
    int press;
    while(true)
    {
        Sleep(2000);
        options();
        cin>>press;
        system("CLS");

        if(press==1)
        {
            Chase.data(press);
        }
        else if(press==2)
        {
            Chase.data(press);
        }
        else if(press==3)
        {
            Chase.data(press);
        }
        else if(press==4)
        {
            Chase.data(press);
        }
        else if(press==5)
        {
            Chase.data(press);
        }
        else if(press==6)
        {
            Chase.data(press);
        }
        else if(press==7)
        {
            Chase.data(press);
        }
        else{
            cout<<"Inavlid Input.\n";
        }

    }
}