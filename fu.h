#ifndef FU.H
#define FU.H
#include <iostream>
using namespace std;
int perfect_weightf( double height){//function tor calculate the perfect weight for males
  return height=height-110; //return and calc
}
int perfect_weightm( double height){//function tor calculate the perfect weight for females
  
  return height=height-100;//return and calculate
}
 void gainingmenu(const char* ing[],const char* ag[], const char* mg[ ],const char* itg[],const char* meg[]){ //function with arrays for gaining menu
 //arrays to print
  cout<<endl<<"Indian menu: \n";
  for(int i=0; i<3; i++){ //print the elements 
    cout<<ing[i]<<endl;
  }
  cout<<endl<<"Acian menu: \n";
  for(int i=0; i<3; i++){
    cout<<ag[i]<<endl;//print

  }
  cout<<endl<<"Mexican menu: \n";
  for(int i=0; i<3; i++){
    cout<<mg[i]<<endl;//print
  }
  cout<<endl<<"Italian menu: \n";
  for(int i=0; i<3; i++){
    cout<<itg[i]<<endl;//print
  }
  cout<<endl<<"Middle East menu: \n";
  for(int i=0; i<3; i++){
    cout<<meg[i]<<endl;//print
  }
}
void losingmenu(const char* inl[],const char* al[], const char* ml[ ],const char* itl[],const char* mel[]){//function with arrays for losing menu
  //arrays to print
  cout<<endl<<"Indian menu: \n";
  for(int i=0; i<3; i++){
    cout<<inl[i]<<endl;//print
  }
  cout<<endl<<"Acian menu: \n";
  for(int i=0; i<3; i++){
    cout<<al[i]<<endl;//print

  }
  cout<<endl<<"Mexican menu: \n";
for(int i=0; i<3; i++){
    cout<<ml[i]<<endl;//print
  }
  cout<<endl<<"Italian menu: \n";
  for(int i=0; i<3; i++){
    cout<<itl[i]<<endl;//print
  }
  cout<<endl<<"Middle East menu: \n";
  for(int i=0; i<3; i++){
    cout<<mel[i]<<endl;//print
  }
}
double bill(double b, double l, double d, double sna ){// double function to count the bill
	int x,y,z, e;
	// from line 63 to 70 storing num of meals, and calcualte
	cout<<"\nPlease Enter how many of breakfast meal do you want?  "<<endl;
	cin>>x; 
	b*=x;
	cout<<"Please Enter how many of lunch meal do you want?  "<<endl;
	cin>>y;
	l*=y;
	cout<<"Please Enter how many of dinner meal do you want?  "<<endl;
	cin>>z;
	d*=z;
	cout<<"Please Enter how many of snack do you want?  "<<endl;
	cin>>e;
	sna*=e;
	double total=(b+l+d+sna);//calculate the total bill
	cout<<"*********"<<endl<<"here is your bill:"<<endl<<"For breakfast: "<<b<<endl;
	cout<<"For lunch: "<<l<<endl<<"For dinner: "<<d<<endl<<"For snack: "<<sna<<endl;
	cout<<"Total bill : "<<total<<endl<<"*********"<<endl;
	return b,l,d,sna,total;

}

#endif

