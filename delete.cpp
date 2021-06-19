#include<iostream>
#include<iomanip>

using namespace std;
class deleted
{
        private: int n,item,pos,a[10],count;
        public: void input();
                void compute();
                void display();
};
void deleted::input()
{
        int i;
        cout<<"Enter the size of an array"<<endl;
        cin>>n;
        cout<<"Enter the array elements"<<endl;
        for(i=0;i<n;i++)
        cin>>a[i];
        cout<<"Enter what Position to delete that item"<<endl;
        cin>>pos;
}
void deleted::compute()
{
        int i;
        if(pos>n)
        {
                cout<<"Your Position is Greater than N"<<endl;
                exit(0);
        }
        else
        {
		item = a[pos];
                i = pos;
                while(i<=n-1)
                {
			a[i] = a[i+1];
                        i++;
                }
                
                n = n - 1;
        }
}
void deleted::display()
{
    int i;
    cout<<"Your deleted item is: "<<item<<endl;
    cout<<"After deleting item into the array, we get:\n";
    for(i=0;i<n;i++)
            cout<<setw(4)<<"|"<<a[i]<<"|"<<endl;
}
int main()
{
        deleted i;
        i.input();
        i.compute();
        i.display();
}
