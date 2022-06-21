
#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;
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
/*Write a function named “removeNegativeQuantity” that accepts the vector of 
pointers to Transaction objects. It will go through that list and remove all 
Transaction objects with the negative quantity. It will also return how many 
Transaction objects that it has removed from the list. 
 */
int removeNegativeQuantity(vector<Transaction*> &transactions){
    int count = 0;
    for (int i = 0; i < transactions.size(); i++)
    {
        if (transactions[i]->calculateTotal(*transactions[i]) < 0)
        {
            transactions.erase(transactions.begin() + i);
            count++;
            i--;
        }
    }
    return count;
}

int main(){
    vector<Transaction *>t (5,nullptr);
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = new Transaction();
    }

    
    
    t[0]->setStockSymbol("AAPL");
    t[0]->setNumOfShares(100);
    t[0]->setPricePerShare(-10.00);
    t[1]->setStockSymbol("GOOG");
    t[1]->setNumOfShares(200);
    t[1]->setPricePerShare(-121210.00);
    t[2]->setStockSymbol("MSFT");
    t[2]->setNumOfShares(300);
    t[2]->setPricePerShare(13.00);
    int c = removeNegativeQuantity(t);
    cout << "Removed " << c << " transactions" << endl;

    cout << t[1]->getNumOfShares() << endl;

    return 0;
}