#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int income,expense,balance,choice;
  
  
  //cout<<"Enter your income; "<<endl;
  //cin>>income;
  
  //cout<<"Enter your expense; "<<endl;
 // cin>>expense;
  
  do{
  	
  	cout<<setw(10)<<"MENU"<<setw(10)<<endl;
  		cout<<"1-Add income"<<endl;
  		cout<<"2-Add expense"<<endl;
  		cout<<"3-View balance"<<endl;
  		cout<<"4-Exit"<<endl;
  	cout<<"Enter the number you would like to proceed with: ";	
  	cin>>choice;
  switch(choice){
  	
  	case 1:
  		cout<<"Enter the amount of total income: "<<endl;
  		cin>>income;
  		if(income<0){
  			cout<<"Insufficient balance.Try again.";}
  			
		  
  	break;
	  	
  	case 2:
  		cout<<"Enter the amount of expense: "<<endl;
  		cin>>expense;
  		if(income<expense){
  			cout<<"Insufficient amount";
		  }
  	break;
  	
  	case 3:
  		cout<<"Your current balance is "<<income-expense<<endl;
  	break;
  	
  	case 4: 
  	       cout<<"Thank you for using our system."<<endl;
  	       break;
  	       
  	  default:(income <expense);{
	    cout<<"Invalid amount";   }  
	    
  }}while(choice!=4);
  	
	

	
	
	return 0;
}
