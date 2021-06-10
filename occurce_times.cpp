/*finding the occurence of a element in an array*/

#include<iostream>
using namespace std;
class frequency
{
    private: int a[10],n,ele,count;
    public: void getdata(); /*Here we input the data to our program*/
            void compute(); /*Here we process the array element and find the occurences of an element*/
            void display(); /*At last we display the result*/
};
void frequency::getdata()
{
    int i;
    cout<<"Enter the Array size"<<endl;     /*This are all input parts*/
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter search element"<<endl;
    cin>>ele;
}

void frequency::compute()
{
    int i;
    count = 0;          /* initial value of count should be 0 */
    for(i=0;i<n;i++)    /* 'for loop' for 0 - n where n is a number for the size of an array*/
    if(a[i]==ele)       /* if statement is used to check the condition given, here it is equivalent '=='  */
        count = count + 1; /* if the condition matches the our count will increment */
}

void frequency::display()
{
    if(count>0)  /* this is to check the condition for our result suppose if you find the occurence it will execute the below statement*/
        cout<<"Frequnecy of "<<ele<<" is "<<count;  
    else  /* if the condition is not satisfied therefore it execute below line*/
        cout<<"Does not Exist";
}

int main()
{
    frequency f;  /* At last we make object of our class and we get use to it */ 
    f.getdata();  
    f.compute();
    f.display();
}


/* THANK YOU*/