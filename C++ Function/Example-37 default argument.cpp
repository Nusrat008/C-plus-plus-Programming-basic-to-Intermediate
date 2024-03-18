#include<iostream>
#include<iomanip>
//New  Adding
#include<string>

using namespace std;

double calc_cost(double base_cost=100.0,double tax_rate = 0.06,double shipping=3.50);

void greeting(string name,string prefix="Mr.",string suffix="");

double calc_cost(double base_cost,double tax_rate ,double shipping){
	return base_cost +=(base_cost *tax_rate)+shipping;
}

void greeting(string name,string prefix,string suffix){
	cout<<"Hello "<<prefix + " " + name + " " + suffix<<endl;
}

int main(){
	double cost{0};
	cost=calc_cost(100.0,0.08,4.25);
	
	cout<<fixed<<setprecision(2);
	cout<<"Cost is: "<<cost<<endl;
	
	cost=calc_cost(100.0,0.08);
	cout<<"Cost is: "<<cost<<endl; 
	
	cost=calc_cost(200.0);
	cout<<"Cost is: "<<cost<<endl; 
	
	cost=calc_cost();
	cout<<"Cost is: "<<cost<<endl; 
	 
	 greeting("Mahabubul Mwola","Dr.","M.D.");
	 greeting("Nusrat jahan","Mrs","Ph.D.");
	 greeting("Ramiz Moktader","Mr","Ph.D.");
	 
	cout<<endl; 
	return 0; 
	
}
