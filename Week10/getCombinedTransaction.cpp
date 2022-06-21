#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;


/* I am not sure if this is the best way to do this.
   I am using the stringstream class to convert the double to a string.
*/
class Transaction
{
    private:
        int numOfShares;
        double pricePerShare;
        string stockSymbol;
    public:
    string getStockSymbol()
    {
        return stockSymbol;
    }
    int getNumOfShares()
    {
        return numOfShares;
    }
    double getPricePerShare()
    {
        return pricePerShare;
    }
    string toString(Transaction t)
    {
        string str = "";
        str += "Symbol(" + t.getStockSymbol() + ")";
        str += "Quantity(" + to_string(t.getNumOfShares()) + ")";
        stringstream ss;
        ss << fixed << setprecision(2) << t.getPricePerShare();
        str += "Price($" + ss.str() + ")";
        stringstream ss2;
        ss2 << fixed << setprecision(2) << t.getNumOfShares() * t.getPricePerShare();
        str += "Total($" + ss2.str() + ")";
        return str;

    }
    int calculateTotal(Transaction t)
    {
        return t.getNumOfShares()*t.getPricePerShare();
    }
    int compareTotal(Transaction t1, Transaction t2)
    {
        if (calculateTotal(t1) > calculateTotal(t2))
        {
            return 1;
        }
        else if (calculateTotal(t1) < calculateTotal(t2))
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
    void setStockSymbol(string stockSymbol)
    {
        this->stockSymbol = stockSymbol;
    }
    void setNumOfShares(int numOfShares)
    {
        this->numOfShares = numOfShares;
    }
    void setPricePerShare(double pricePerShare)
    {
        this->pricePerShare = pricePerShare;
    }
};

Transaction createTransaction(string stockSymbol, int numOfShares, double pricePerShare)
{
    Transaction t;
    if (numOfShares <0)
    {
        // return NULL
        return t;
    }
    else if (pricePerShare < 0)
    {
        // return NULL
        return t;
    }
    else if (stockSymbol.empty()== true)
    {
        // return NULL
        return t;
    }
    else {
    t.setStockSymbol(stockSymbol);
    t.setNumOfShares(numOfShares);
    t.setPricePerShare(pricePerShare);
    return t;
    }
}

/*Write a function named “getCombinedTransaction” that accepts an array of 
Transaction object pointers, its size, a company symbol and cost per share. It will 
go through the list in the array and return a pointer of a new Transaction object 
that contains the total of quantity of all the matched Transaction objects (with the 
same company symbol and cost per share). It will return NULL if there is no 
match. */

pair <Transaction, int> getCombinedTransaction(Transaction * t[], int size, string companySymbol, double costPerShare)
{
    int total = 0;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (t[i]->getStockSymbol() == companySymbol && t[i]->getPricePerShare() == costPerShare)
        {
            total += t[i]->getNumOfShares();
            index = i;
        }
    }
    if (total == 0)
    {
        return make_pair(Transaction(), -1);
    }
    else
    {
        Transaction t;
        t.setStockSymbol(companySymbol);
        t.setNumOfShares(total);
        t.setPricePerShare(costPerShare);
        return make_pair(t, index);
    }
}
int main()
{
    Transaction *t[5];
    for (int i = 0; i < 5; i++)
    {
        t[i] = new Transaction();
    }
    t[0]->setStockSymbol("AAPL");
    t[0]->setNumOfShares(10);
    t[0]->setPricePerShare(100);
    t[1]->setStockSymbol("AAPL");
    t[1]->setNumOfShares(10);
    t[1]->setPricePerShare(200);
    t[2]->setStockSymbol("AAPL");
    t[2]->setNumOfShares(30);
    t[2]->setPricePerShare(100);
    t[3]->setStockSymbol("AAPL");
    t[3]->setNumOfShares(40);
    t[3]->setPricePerShare(400);
    pair<Transaction,int> t2 = getCombinedTransaction(t, 5, "AAPL", 100);
    cout << t2.first.toString(t2.first) << endl;}
    