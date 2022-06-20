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

int main(){
    Transaction t = createTransaction("AAPL", -1, -1);
    cout << t.toString(t) << endl;
    Transaction t2 = createTransaction("AAPL", 1, 1);
    cout << t2.toString(t2) << endl;
    return 0;
}
