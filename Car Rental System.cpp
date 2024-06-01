#include<iostream>
#include<string>
using namespace std;
int total_rent(int days , int r);
int advance(int days , int r);
int discount(int days, int r);
int d_advance(int d);




int main()
{   int select,days,r,t,a,d,dis_a;
    string c,c_fname,c_lname,c_num;
    string address;
    string cnic;
    system("color f4");
	cout<<"\t\t\t\t\tWelcome to Car Rental Services"<<endl;
	cout<<"\n"<<endl;
	
	string cars[7]={"Suzuki Alto","Suzuki WagonR","Suzuki Cultus","Honda City","Honda Civic","Corolla","Fortuner"};
	int rent[7]={2500,3000,3000,5000,10000,5000,15000};
	
	cout<<"List of Available Cars \t\tPer day Rent"<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<i+1<<"-"<<cars[i]<<"\t\t\t"<<rent[i]<<endl;
	}
	
	cout<<"Enter car number you want to select=";
	cin>>select;
	select=select-1;
	cout<<"\nYour Selected Car is:"<<cars[select]<<"\nRent per day="<<rent[select]<<endl;
	c=cars[select];
	r=rent[select];
	cout<<"\n\n Bumper Offer 10% Discount On Renting more than 30 Days\n"<<endl;
	cout<<"\nEnter For how many days you want to rent the car=";
	cin>>days;
	
	if(days<30)
	{
	t=total_rent(days,r);
	a=advance(days,r);	
	}
	
	if(days>=30)
	{
	  d=discount(days,r);
	  dis_a=d_advance(d);	
	}
	
	
	cout<<"\nEnter your personel details below"<<endl;
	cout<<"Enter Your First name:";
	cin>>c_fname;
	cout<<"Enter Your Last name:";
	cin>>c_lname;
    cout<<"Enter your phone number must be 11 digits=";
	cin>>c_num;
	cout<<"Enter your cnic with dashes:";
	cin>>cnic;
	
	
	cout<<"\n\t\t\t\t\tCar Booked Sucessfully\n\n"<<endl;
	cout<<"All Details"<<endl;
	cout<<"Your Name:"<<c_fname<<" "<<c_lname<<endl;
	cout<<"Your Number:"<<c_num<<endl;
	cout<<"Your Cnic:"<<cnic<<endl;
	cout<<"Car Name:"<<c<<endl;
    if(days<30)
	{
		cout<<"Total Rent="<<t<<endl;
	}
	if(days>=30)
	{
		cout<<"Total Rent After Discount="<<d<<endl;
	}
	if(days<30)
	{
	    cout<<"Advance="<<a<<endl;	
	}
	if(days>=30)
	{
		cout<<"Advance="<<dis_a<<endl;
	}
    
    cout<<"Car rented for "<<days<<" days only."<<endl;
	cout<<"Enjoy Your Journey"<<endl;
	cout<<"THANK YOU"<<endl; 
	
	system("pause");
	return 0;
}






int total_rent(int days , int r)
{   int t_rent;
	t_rent=r*days;
	cout<<"Total Rent="<<t_rent<<endl;
	return t_rent;
	
}
int advance(int days, int r)
{   int t_rent;
	t_rent=r*days;
	int adv=t_rent*30/100;
	cout<<"Advance Payment="<<adv<<endl;
	return adv;
}
int discount(int days, int r)
{
	
	int t_rent;
	t_rent=r*days;
	int dis=t_rent*90/100;
	cout<<"Your are given a Discount of 10% because you rented for more than 30 days"<<endl;
	cout<<"Total Rent After Discount="<<dis<<endl;
	return dis;
	
}
int d_advance(int d)
{
	int d_advance=d*30/100;
	cout<<"Advance="<<d_advance<<endl;
	return d_advance;
	
}
