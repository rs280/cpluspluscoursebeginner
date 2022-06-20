
#include <iostream>
#include <iomanip>
#include <sstream>
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

int removeNegativeQuantity(vector<Transaction*>& transactions)
{
    int count = 0;
    for (int i = 0; i < transactions.size(); i++)
    {
        if (transactions[i]->getNumOfShares() < 0)
        {
            transactions.erase(transactions.begin() + i);
            count++;
        }
    }
    return count;
}

int main(){
    Transaction t1;
    t1.setStockSymbol("AAPL");
    t1.setNumOfShares(100);
    t1.setPricePerShare(10.00);
    string t1Info =  t1.toString(t1);
    Transaction t2;
    t2.setStockSymbol("GOOG");
    t2.setNumOfShares(200);
    t2.setPricePerShare(20.00);
    string t2Info =  t2.toString(t2);
    int compare = t1.compareTotal(t2, t1) ;
    int t1total = t1.calculateTotal(t1) ;
    int t2Total =  t2.calculateTotal(t2);

    return 0;
}