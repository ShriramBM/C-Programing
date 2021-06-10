/*Insert an Element into an array at a given position*/

#include<iostream>
#include<iomanip>
using namespace std;
class insert
{
    private: int pos, n, a[10], item;
    public: void getdata();
            void compute();
            void display();
};

void insert::getdata()
{
    int i;
    cout<<"Enter the size of an element"<<endl;
    cin>>n;
    cout<<"Enter the Array elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter the Item to insert"<<endl;
    cin>>item;
    cout<<"Enter the position to insert the item"<<endl;
    cin>>pos;
}
void insert::compute()
{
    int i;
    if(pos>n)   /* first we should check for the position number it should not be greater the size of an array */
    {
    cout<<"Your posion is greater the size of array"<<endl;
    exit(0);
    }
    else
    {
        for(i=n-1; i>=pos; i--) /* this line have conditions for the insertion operations. It is calculated from last line of an array */
        {
            a[i+1] = a[i];
        }
        a[pos] = item;
        n = n+1;
    }
}

void insert::display()
{
    int i;
    cout<<"After inserting item into the array we get:\n";
    for(i=0;i<n;i++)
    cout<<setw(4)<<a[i];
}

int main()
{
    insert is;
    is.getdata();
    is.compute();
    is.display();
}