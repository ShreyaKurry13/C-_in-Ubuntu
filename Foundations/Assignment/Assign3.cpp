#include <iostream>
#include "Assign3.h"

using namespace std;

int main(void)
{

        int count =0;
        int n,choice;
        cout<<"How many items to add?";
        cin >> n;
       
        Items* a = new Items*[n];
        do
        {
        cout << "APPLICATION MENU "<<endl;
        cout << "-----------------" <<endl;
        cout << "1.Add Item" <<endl;
        cout << "2.Print Item" <<endl;
        cout << "0.Exit" <<endl;
        cout << "Enter your choice: ";
        cin >> choice;
       
        switch(choice)
        {
        case 1:
        {

        if(count >= n)
  {
cout << "Cannot Add Items!!!" <<endl;
break;
  }
   string names;
        double costs;
        float profits;
        char ch;
        float discount;
       
cout <<"Sub Menu" <<endl;
        cout <<"---------" <<endl;
        cout <<"I.Item" <<endl;
        cout << "U.Sub Item" <<endl;
        cout <<"Enter choice: "<<endl;
        cin >> ch;
       
        if(count <n)
        {

        cout << "Enter name: ";
        cin >> names;
       
        cout << "Enter cost: ";
        cin >> costs;
       
        cout << "Enter profit: ";
        cin >> profits;
       
        if(ch == 'I' || ch =='i')
        {
        a[count++] =  new Items(names,profits,costs);      
}
else if(ch == 'U' || ch =='u')
        {
        cout << "Enter discount: ";
        cin >> discount;
       
           a[count++] = new UsedItems(names, costs, profits,discount);
                       
}

else
{
cout << "Invalid Options.";
}
   }
   break;
   }
   case 2:
{
cout << " Items Added : "<< count <<endl;
cout << "Name\t" << "\tSelling Price" <<endl;


double tp = 0;

for (int i=0 ; i<count ; i++)
{
cout << a[i]->GetName()<< "\t\t\t" << a[i]->SellingPrice() <<endl;

tp += a[i]->SellingPrice();
}

cout << "-------------------------------"<<endl;
cout << "Total Price\t\t" << tp <<endl;
}

break;

case 0:
cout <<"Byeee..."<<endl;
break;

default:
cout << "Invalid Choice."<<endl;
}
       
    }while(choice !=0 );	

}
