// Unit 7 LB1: Catering written using a while loop
// by Noor Moghul

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    
    int numAdults, numChild;
    float adultCost, dessertCost, roomFee, tipTaxPerc, deposit, totalAdult, totalChild, totalDessert, totalFood, totalTaxTip, balanceDue;
    char check;
    
    
do
{
    cout<<"Enter the number of adults to be servered\n";
    cin>> numAdults;
        while((! (numAdults>=0)))
        {
            cout<<"Invalid input. Try again." <<endl;
            cout<< "Enter the number of adults to be servered\n";
            cin>> numAdults;
        }

    cout<< "Enter the number of children to be served\n";
    cin>> numChild;
        while(! (numChild>=0))
        {
            cout<<"Invalid input. Try again." <<endl;
            cout<< "Enter the number of children to be served\n";
            cin>> numChild;
        }
        
    cout<< "Enter the cost per adult's meal\n";
    cin>> adultCost;
        while(! (adultCost>=0))
        {
            cout<<"Invalid input. Try again." <<endl;
            cout<< "Enter the cost per adult's meal\n";
            cin>> adultCost;
        }
    
    cout<< "Enter the cost for dessert\n";
    cin>> dessertCost;
        while(! (dessertCost>=0))
        {
            cout<<"Invalid input. Try again." <<endl;
            cout<< "Enter the cost for dessert\n";
            cin>> dessertCost;
        }
    
    cout<< "Enter the room fee\n";
    cin>> roomFee;
        while(! (roomFee>=0))
        {
            cout<<"Invalid input. Try again." <<endl;
            cout<< "Enter the room fee\n";
            cin>> roomFee;
        }
    
    cout<< "Enter the percentage for tip and tax\n";
    cin>> tipTaxPerc;
        while(! (tipTaxPerc>=0))
        {
            cout<<"Invalid input. Try again." <<endl;
            cout<< "Enter the percentage for tip and tax\n";
            cin>> tipTaxPerc;
        }
    
    cout<< "Enter the deposit amount\n";
    cin>> deposit;
        while(! (deposit>=0))
        {
            cout<<"Invalid input. Try again." <<endl;
            cout<< "Enter the deposit amount\n";
            cin>> deposit;
        }
    
        totalAdult = numAdults * adultCost;
        totalChild = numChild * (adultCost * .6) ;
        totalDessert = dessertCost * (numChild+numAdults);
        totalFood = totalAdult+totalChild+totalDessert;
        totalTaxTip = totalFood * tipTaxPerc;
        balanceDue = totalFood + totalTaxTip + roomFee - deposit;
        
        cout<<"\n\n\nCasewell Catering and Convention Service"<<setprecision(2) <<fixed <<endl<<endl;
        cout<<"Final Bill"<<endl<<endl<<endl<<endl;
        cout<<"Number of Adults: " <<setw(31) <<numAdults <<endl<<endl;
        cout<<"Number of Children: " <<setw(29) <<numChild <<endl<<endl;
        cout<<"Cost per adult without dessert: " <<setw(7) <<"$" <<setw(10) <<adultCost <<endl<<endl;
        cout<<"Cost per child without dessert: " <<setw(7) <<"$" <<setw(10) <<adultCost * .6 <<endl<<endl;
        cout<<"Cost per dessert: " <<setw(21) <<"$" <<setw(10) <<dessertCost <<endl<<endl;
        cout<<"Room fee: " <<setw(29) <<"$" <<setw(10) <<roomFee <<endl<<endl;
        cout<<"Tip and tax rate: " <<setw(31) <<tipTaxPerc <<endl<<endl<<endl<<endl;
        cout<<"Total cost for adult meals: " <<setw(11) <<"$" <<setw(10) <<totalAdult <<endl<<endl;
        cout<<"Total cost for child meals: " <<setw(11) <<"$" <<setw(10) <<totalChild <<endl<<endl;
        cout<<"Total cost for dessert: " <<setw(15) <<"$" <<setw(10) <<totalDessert <<endl<<endl;
        cout<<"Total food cost: " <<setw(22) <<"$" <<setw(10) <<totalFood <<endl<<endl;
        cout<<"Plus tips and tax: " <<setw(20) <<"$" <<setw(10) <<totalTaxTip <<endl<<endl;
        cout<<"Plus room fee: " <<setw(24) <<"$" <<setw(10) <<roomFee <<endl<<endl;
        cout<<"Less deposit: " <<setw(25) <<"$" <<setw(10) <<deposit <<endl<<endl<<endl<<endl;
        cout<<"Balance due: " <<setw(26) <<"$" <<setw(10) <<balanceDue <<endl<<endl;
        
        cout<<"To print another bill enter y, to exit enter n\n";
        cin>>check;
    } while (check == 'y');
}
