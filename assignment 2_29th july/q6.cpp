// Q6 WAP to convert given paisa into its equivalent rupee and paisa

#include <iostream>
using namespace std;
int main()
{
    int tpaisa, rupee, paisa;
    cout<<"Enter paisa ";
    cin>>tpaisa;
    rupee=tpaisa/100;
    paisa=tpaisa%100;
    cout<<"Total rupee="<<rupee<<"."<< paisa<<endl;
    cout<<"where rupee="<<rupee<<" paisa= "<< paisa<<endl;
    return 0;
}
