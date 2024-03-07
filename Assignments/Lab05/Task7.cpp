#include <iostream>
#include <string>

using namespace std;

class MenuItem 
{
private:
    string itemName;
    double itemPrice;
public:
    MenuItem(){}
    MenuItem(string name, double price): itemName(name), itemPrice(price) {}
    string getName() 
    { 
        return itemName; 
    }
    double getPrice() 
    { 
        return itemPrice; 
    }
};

class Menu 
{
private:
    MenuItem items[10];
    int count;
public:
    Menu()
    {
        count=0;
    }
    void addItem(MenuItem item) 
    {
        if (count<10) 
        {
            items[count++] = item;
        }
    }
    void removeItem(int removeIndex) 
    {
    if (removeIndex>=0 && removeIndex<count) 
    {
        if (removeIndex==count-1)
        {
            items[removeIndex]= MenuItem();
            count--;
        }
        else{
            for (int i = removeIndex; i < count - 1; i++) 
            {
                items[i]=items[i+1];
            }
            count--;
        }
    }
}
   void displayMenu() 
   {
    cout << "Menu:" << endl;
    for (int i = 0; i < count; i++) 
    {
    cout << "Item " << i + 1 << ": ";
    if (!items[i].getName().empty()) 
    {
      cout << items[i].getName() << "\tPKR" << items[i].getPrice() << endl;
    } 
    else 
    {
      cout << "(Cleared)" << endl;
    }
  }
  cout << "----------------------------------------" << endl;
}



};

class Payment 
{
    private:
    double amount;
    public:
    Payment(double amt) : amount(amt) {}
    double getAmount() 
    { 
        return amount; 
    }
};

class Order 
{
private:
    MenuItem items[10];
    int numItems;
    Payment payment;
public:
    Order(MenuItem orderedItems[], int count, Payment pay) : numItems(count), payment(pay) {
        for (int i=0; i<numItems; i++) 
        {
            items[i]=orderedItems[i];
        }
    }
    void displayOrder() 
    {
        cout<<"Ordered items:"<<endl;
        int sum=0;
        for (int i=0; i<numItems; i++) 
        {
            cout<<"Item no. "<<i+1<<" "<< items[i].getName()<<"\tPKR "<<items[i].getPrice()<<endl;
            sum+=items[i].getPrice();
        }
        cout<<"Total bill: PKR "<<sum<<endl;
        cout<<"Total payment: PKR "<<payment.getAmount()<<endl;
    }
};

class Restaurant 
{
private:
    Menu menu;
public:
    Restaurant(Menu m): menu(m){}
    void displayMenu() 
    {
        menu.displayMenu();
    }
    void placeOrder(MenuItem items[], int count, Payment payment) 
    {
        Order order(items, count, payment);
        order.displayOrder();
    }
};

int main() 
{
    cout<<"Rumaisa Kashif 23K-0744 Task7\nWelcome to MEWS"<<endl;
    MenuItem i1("Spinach Ravioli", 1000);
    MenuItem i2("Gouda Burger", 1300);
    MenuItem i3("Mac n Cheese", 2500);
    MenuItem i4("Steak au Gratin", 2600);
    MenuItem i5("Roast Beef Sandwich", 1800);
    MenuItem i6("Iced Vanilla Cold Foam Latte", 734);

    Menu menu;
    menu.addItem(i1);
    menu.addItem(i2);
    menu.addItem(i3);
    menu.addItem(i4);
    menu.addItem(i5);
    menu.addItem(i6);

    Restaurant restaurant1(menu);
    restaurant1.displayMenu();
    menu.removeItem(5);
    cout<<"Displaying updated menu..."<<endl;
    restaurant1.displayMenu();
    MenuItem orderup[]={i1, i2, i4};
    int count= sizeof(orderup)/sizeof(orderup[0]);
    Payment payment(4900);
    restaurant1.placeOrder(orderup, count, payment);
    return 0;
}
