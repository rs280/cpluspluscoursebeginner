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

pair <Transaction*,int> getCombinedTransaction(Transaction* transactions, int size, string companySymbol, double costPerShare, int& numOfMatches)
{
    int numOfMatches=0;
    Transaction* t = new Transaction();
    
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        if (transactions[i].getStockSymbol() == companySymbol && transactions[i].getPricePerShare() == costPerShare)
        {
            total += transactions[i].getNumOfShares();
            numOfMatches++;
        }
    }
    if (total == 0)
    {
        return NULL;
    }
    else
    {
        t->setStockSymbol(companySymbol);
        t->setNumOfShares(total);
        t->setPricePerShare(costPerShare);
        return make_pair(t,numOfMatches);
    }
}
int main(){
    Transaction* transactions = new Transaction[5];
    transactions[0] = createTransaction("AAPL", 100, 10.0);
    transactions[1] = createTransaction("AAPL", 200, 10.0);
    transactions[2] = createTransaction("AAPL", 300, 30.0);
    transactions[3] = createTransaction("AAPL", 400, 30.0);
    transactions[4] = createTransaction("AAPL", 500, 50.0);
    Transaction* t = getCombinedTransaction(transactions, 5, "GL", 30.0);
    if (t == NULL)
    {
        cout << "No match" << endl;
    }
    else
    {
        cout << t->toString(*t) << endl;
    }
    return 0;
}