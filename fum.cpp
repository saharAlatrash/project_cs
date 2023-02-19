#include<iostream>
#include<string>
#include<fstream>
#include"fu.h"
string ss;
using namespace std;
struct info{ //using struct to store user information
  string fname; //first name
  string lname; //last name
  int age; //age
  string gender; //gender
  int height; //height and weight
  int weight;
  
};//passing struct to functione by reference
info userinfo(info &i){ //using strcture info to ask and print the information
  cout<<"Enter your first name:"<<endl;
  cin>>i.fname;
  cout<<"Enter your last name :"<<endl;
  cin>>i.lname;
  cout<<"Enter your age"<<endl;
  cin>>i.age;
  cout<<"Enter your gender"<<endl;
  cout<<"-Enter M for(Male): \n-Enter F for(Female) "<<endl;
  cin>>i.gender;
  cout<<"Please enter your current height and weight: "<<endl;
  cin>>i.height>>i.weight;
  
  return i;
}

namespace first_snak //first namespace
{ 
void func(string d) 
{ cout << "Your snack is: " <<d<< endl; 

} 
}
 // second name space 
//namespace second_snak { 
//void func(string d) 
//{ cout << "Inside second snak  " <<<< endl; }
 //}

int main(){
string breakfast, lunch,dinner, end1, end2, end3; //define a string variables
double br_pr,lu_pr, din_pr;
char goal;
int perfect;
 //for price
//firstly we giving the user a defenition about our program
cout<<"Welcome to our project for the Principles of Programming course Our project is "<<endl;
cout<<"this program is for weight loss and it's allows the user to enter his data and then suggest a healthy diet for him"<<endl;
//define a character for the goal
info z; 
userinfo(z); //giving structure a value
info i; 
//structure info=z,, = userinfo
i=z;

  if(i.gender=="F"|| i.gender=="f"){//making a test if gender is female , avoiding the errors
    if(i.weight<perfect_weightf(i.height)){ //making a test if weight is low, printing a cout statement for the user to gain weight
      cout<<"""YOU HAVE TO GAIN WEIGHT"""<<endl;
  }
  else if(i.weight>perfect_weightf(i.height)){
    cout<<"""YOU HAVE TO LOSE WEIGHT"""<<endl; //making a test if weight is high, printing a cout statement for the user to lose weight
  }
  else{
    cout<<"""WOW!! YOUR WEIGHT IS PERFECT"""<<endl; //else, the weight is perfect weight
  }
  cout<<"The perfect weight for you is: "<<endl;
  cout<<perfect_weightf(i.height)<<endl;
   perfect=perfect_weightf(i.height);
    }//here calcualting the perfect weight for female 
    
    else if(i.gender=="M" ||i.gender=="m"){//making a test if gender is male , avoiding the errors
    if (i.weight<perfect_weightm(i.height)){ //making a test if weight is low, printing a cout statement for the user to gain weight
      cout<<"""YOU HAVE TO GAIN WEIGHT"""<<endl; 
      
  }
  else if(i.weight>perfect_weightm(i.height)){
    cout<<"""YOU HAVE TO LOSE WEIGHT"""<<endl; //making a test if weight is high, printing a cout statement for the user to lose weight
  }
  else{
    cout<<"""WOW!! YOUR WEIGHT IS PERFECT"""<<endl; //else, the weight is perfect weight
  }
  cout<<"The perfect weight for you is: "<<endl;
    cout<<perfect_weightm(i.height)<<endl;
	 perfect=perfect_weightm(i.height); //here calcualting the perfect weight for female 
}
cout<<endl;
//We are done from testing the gender and weight, we will move to work in meals
    cout<<"-----------OK, now you know your perfect weight which is: "<<perfect<<"-----------"<<endl;
	cout<<"           and you know if you need lose or gain weight"<<endl;
    cout<<"           but We will let you decide what you want to do, so: "<<endl;
    //from line 80 to 82, we gave the user his perfect weight, but we let him decide what his goal is,losing or gaining
    cout<<endl;
  cout<<"what is your main goal? "<<endl; //asking the user about his goal
  cout<<"-Enter L for(Lose wieght): \n-Enter G for(gaing weight) "<<endl;
  cin>>goal; //storing the answer
  cout<<endl;
  cout<<"-----------Ok let's make you a good diet according to your decesion-----------"<<endl;
  cout<<"  What kind of meals do you prefer from this menu? (for Breakfast , lunch and dinner: )" <<endl;//asking the user about the fav meals ehich them from menu beloe
  cout<<"                            Here is the menu: "<<endl; 
  cout<<"           Please Enter the First TWO letters: "<<endl;
  // asking the user to enter fisrt two letters to store the meal
  cout<<"             ---the meals menu: indian, acian , mexican and middle east---"<<endl;
  cout<<"--------------------------------------------------------------------------"<<endl;
  const char* indg[4]={"Breakfast (250-300 calorie) Masala_omelete ", "Lunch:(400-500 calorie)Tandoori_chicken" ,"Dinner: (200-300 calorie)veg_beryani"};
  const char* acg[4]={"Breakfast:(250-300 calorie) okonomiyaki ", "Lunch:(400-500 calorie) dempling ","Dinner:(200-300 calorie)kong pao"};
  const char* meg[4]={"Breakfast:(250-300 calorie)black beans & chipotle tostadas ","Lunch:(400-500 calorie)Fajita Chicken Roll-Ups ","Dinner:(200-300 calorie): Blackened Fish and Avocado Tostadas"};
  const char* ittg[4]={"Breakfast:(250-300 calorie)piadina", "Lunch:(400-500 calorie)minestrone" ,"Dinner:(200-300 calorie)bruschetta6"};
  const char* midg[4]={"Breakfast:(250-300 calorie)grilled halioumi cheesa+slice of bread" , "Lunch:(400-500 calorie) quarter of agrilled salmon slice  with 5 spoons of rice","Dinner:(200-300 calorie)green salad , grilled salmon slice+grilled chicken"};
  
  const char* indl[4]={"Breakfast (250-300) Masala_omelete ", "Lunch:(400-500 calorie)Tandoori_chicken" ,"Dinner: (250-300 calorie)veg_beryani"};
  const char* acl[4]={"Breakfast:(250-300 calorie) okonomiyaki " , "Lunch:(400-500 calorie)  dempling ","Dinner:(200-300 calorie) kong pao"};
  const char* mel[4]={"Breakfast:(250-300 calorie)black beans & chipotle tostadas" , "Lunch:(400-500 calorie)Fajita Chicken Roll-Ups ","Dinner:(200-300 calorie): Blackened Fish and Avocado Tostadas"};
  const char* ittl[4]={"Breakfast:(250-300 calorie)  piadina" ," Lunch:(400-500 calorie) minestrone" ,"Dinner:(200-300 calorie) bruschetta"};
  const char* midl[4]={"Breakfast:(250-300 calorie) grilled halioumi cheesa+slice of bread", "Lunch:(400-500 calorie)  quarter of agrilled salmon slice  with 5 spoons of rice","Dinner:(200-300 calorie)  green salad , grilled salmon slice+grilled chicken"};
 //from line 98 to 108 we made a menu least , first one for gaining wight and the second one is for losing weight
 
  if (goal=='G'||'g'){ //here we testing if the goal is gaining weight ,with avoiding errors
	gainingmenu(indg, acg, meg,ittg ,midg); //calling gaining menu
	cout<<"--------------------------------------------------------------------------"<<endl;
	cout<<"----For breakfast i prefer: ";
	cin>>breakfast; //we store the breakfast according to user choice
	cout<<"\n----For lunch i prefer: ";
	cin>>lunch; //we store the lunch according to user choice
	cout<<"\n----For dinner i prefer: ";
	cin>>dinner; //we store the dinner according to user choice
	if(breakfast=="in"||breakfast=="In"|| breakfast=="IN"|| breakfast=="iN"){ //if statement to store the breakfast, avoiding the errors
		cout<<"Your "<<indg[0]<<endl;
		br_pr=20; //the price of this meal
		end1=indg[0];
	}
	else if(breakfast=="ac"||breakfast=="AC"|| breakfast=="Ac"||breakfast=="aC"){
		cout<<"Your "<<acg[0]<<endl;
		br_pr=30.99;
		end1=acg[0];
	}
	else if(breakfast=="me"||breakfast=="ME"|| breakfast=="Me"||breakfast=="mE"){
		cout<<"Your "<<meg[0]<<endl;
		br_pr=33,8;	
		end1=meg[0];
		}
	else if(breakfast=="it"||breakfast=="IT"|| breakfast=="It"||breakfast=="iT"){
		cout<<"Your "<<ittg[0]<<endl;
		br_pr=29;
		end1=ittg[0];	
	}
	else if(breakfast=="mi"||breakfast=="MI"|| breakfast=="Mi"||breakfast=="mI"){
		cout<<"Your "<<midg[0]<<endl;
		br_pr=36,46;
		end1=midg[0];	
	}
	
	
	if(lunch=="in"||lunch=="In"|| lunch=="IN"||lunch=="iN"){///if statement to store the lunch, avoiding the errors
		cout<<"Your "<<indg[1]<<endl;
		lu_pr=40.5;//the price of this meal
		end2=indg[2];
	}
	else if(lunch=="ac"||lunch=="AC"|| lunch=="Ac"||lunch=="aC"){
		cout<<"Your "<<acg[1]<<endl;
		 lu_pr=39; 
		 end2=acg[1];
	}
	else if(lunch=="me"||lunch=="ME"|| lunch=="Me"||lunch=="mE"){
		cout<<"Your "<<meg[1]<<endl;
		lu_pr=40,9;
		end2=meg[1];
	}
	else if(lunch=="it"||lunch=="IT"|| lunch=="It"||lunch=="iT"){
		cout<<"Your "<<ittg[1]<<endl;
		lu_pr=38.5;
		end2=ittg[1];
	}
	else if(lunch=="mi"||lunch=="MI"|| lunch=="Mi"||lunch=="mI"){
		cout<<"Your "<<midg[1]<<endl;
		lu_pr=39.99;
		end2=midg[1];
	}
	
	if(dinner=="in"||dinner=="In"|| dinner=="IN"|| dinner=="In"){///if statement to store the dinner, avoiding the errors
		cout<<"Your "<<indg[2]<<endl;
		din_pr=48.21;//the price of this meal
		end3=indg[2];
	}
	
	else if(dinner=="ac"||dinner=="AC"||dinner=="Ac"|| dinner=="aC"){
		cout<<"Your "<<acg[2]<<endl;
		  din_pr=44.7 ;
		  end3=acg[2];
	}
	
	else if(dinner=="me"||dinner=="ME"||dinner=="Me"|| dinner=="mE"){
		cout<<"Your "<<meg[2]<<endl;
		din_pr=47  ;
		end3=meg[2];
	}
	
	
	else if(dinner=="it"||dinner=="IT"||dinner=="It"|| dinner=="iT"){
		cout<<"Your "<<ittg[2]<<endl;
			din_pr=49.99  ;
			end3=ittg[2];
	}
	
	else if(dinner=="mi"||dinner=="MI"||dinner=="Mi"|| dinner=="mI"){
		cout<<"Your "<<midg[2]<<endl;
		 din_pr=  50.3; 
		 end3=midg[2];
	}
}
else if (goal=='L'|| goal=='l'){//here we testing if the goal is losing weight ,with avoiding errors
	losingmenu(indl,acl,mel,ittl,midl);
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"For breakfast i prefer: ";
	cin>>breakfast;
	cout<<"\nFor lunch i prefer: ";
	cin>>lunch;
	cout<<"\nFor dinner i prefer: ";
	cin>>dinner;
	if(breakfast=="in"||breakfast=="In"|| breakfast=="IN"|| breakfast=="iN"){//if statement to store the breakfast, avoiding the errors
		cout<<"Your "<<indl[0]<<endl;
		br_pr=27.56;	//the price of this meal
		end1=indl[0];
	}
	else if(breakfast=="ac"||breakfast=="AC"|| breakfast=="Ac"||breakfast=="aC"){
		cout<<"Your "<<acl[0]<<endl;
		br_pr=22.3;	
		end1=acl[0];
	}
	else if(breakfast=="me"||breakfast=="ME"|| breakfast=="Me"||breakfast=="mE"){
		cout<<"Your "<<mel[0]<<endl;
		br_pr=29;
		end1=mel[0];
	}
	else if(breakfast=="it"||breakfast=="IT"|| breakfast=="It"||breakfast=="iT"){
		cout<<"Your "<<ittl[0]<<endl;
		br_pr=24;	
		end1=ittl[0];
		
	}
	else if(breakfast=="mi"||breakfast=="MI"|| breakfast=="Mi"||breakfast=="mI"){
		cout<<"Your "<<midl[0]<<endl;
		br_pr=26.09;
		end1=midl[0];
			
	}
	
	if(lunch=="in"||lunch=="In"|| lunch=="IN"||lunch=="iN"){///if statement to store the lunch, avoiding the errors
		cout<<"Your "<<indl[1]<<endl;
		lu_pr=35.7;//the price of this meal
			end2=indl[1];
	}
	else if(lunch=="ac"||lunch=="AC"|| lunch=="Ac"||lunch=="aC"){
		cout<<"Your "<<acl[1]<<endl;
		lu_pr=33.45;
		end2=acl[1];
	}
	else if(lunch=="me"||lunch=="ME"|| lunch=="Me"||lunch=="mE"){
		cout<<"Your "<<mel[1]<<endl;
		lu_pr=38;
		end2=mel[1];
	}
	else if(lunch=="it"||lunch=="IT"|| lunch=="It"||lunch=="iT"){
		cout<<"Your "<<ittl[1]<<endl;
		lu_pr=34.66;
		end2=ittl[1];
	}
	else if(lunch=="mi"||lunch=="MI"|| lunch=="Mi"||lunch=="mI"){
		cout<<"Your "<<midl[1]<<endl;
		lu_pr=40.32;
		end2=midl[1];
	}
	
	if(dinner=="in"||dinner=="In"|| dinner=="IN"|| dinner=="In"){///if statement to store the dinner, avoiding the errors
		cout<<"Your "<<indl[2]<<endl;
		din_pr= 42.21 ; //the price of this meal
		end3=indl[2];
		
	}
	
	else if(dinner=="ac"||dinner=="AC"||dinner=="Ac"|| dinner=="aC"){
		cout<<"Your "<<acl[2]<<endl;
		 din_pr=  43.6; 
		 end3=acl[2];
	}
	
	else if(dinner=="me"||dinner=="ME"||dinner=="Me"|| dinner=="mE"){
		cout<<"Your "<<mel[2]<<endl;
		 din_pr=  43.6; 
		 end3=mel[2];
	}
	
	else if(dinner=="it"||dinner=="IT"||dinner=="It"|| dinner=="iT"){
		cout<<"Your "<<ittl[2]<<endl;
		din_pr=45  ; 
		end3=ittl[2];	
	}
	
	else if(dinner=="mi"||dinner=="MI"||dinner=="Mi"|| dinner=="mI"){
		cout<<"Your "<<midl[2]<<endl;
		din_pr= 41.29 ;
		end3=midl[2];
	}
}
else{
	cout<<"Sorry, you entered a wrong input, please Enter First Two Letters: ";// else statement if the user entered a wrong answer
}
cout<<endl;

 //here is the menu of the sna k,using pointer array:
string snackarr[6]={"********\n 1- a piece of  green apple\n","2-  5 pieces of dried fruits\n", "3- yogurt\n","4- watermelon juice\n", "5- small amount of green salad\n","6- banana\n********"  };
  string *psnack; 
  psnack=&snackarr[0];//the first element 
  double snapr; // var for the price

  for(int i=0; i<6 ; i++){ //for statement to print the menu of the snack
    cout<<*(psnack++)<<" ";
  }
  string dec_snack; //string for decide snack
  cout<<"\nWhat did you choose from the menu? Please Enter the number of snack:  "<<endl; //asking user to choose snack from the menu
  cin>>dec_snack; //storing
  
 string nm;
 string s;
cout<<"Are you looking for a specific snack?If you are looking for a specific snack , enter (y) If you are not looking for a specific meal, enter (n)";
cin>>s;
if ( s== "n" || s=="N"){
    cout<<"ok";	
	}	
else if(s=="y"||s=="Y")
{
	cout<<"enter the name snack";
	cin >>nm;
	string snackarr[6]={"*********\n 1- a piece of  green apple\n","2-  5 pieces of dried fruits\n", "3- yogurt\n","4- watermelon juice\n", "5- small amount of green salad\n","6- banana\n*********"  };
	for( int i=0 ;i<6; i++){
	if(nm==snackarr[i+1])	{
		ss=snackarr[i+1];
		cout<<"Yes, we have snacks available";
		cout<<"\n the specefic snack you are looking for is: "<<ss<<endl;
	 }
}
}	else{
	cout<<"Sorry,we have not this  snack available ";
}

  //below (from 283-311 )the if statement to test what the user chose
  if(dec_snack=="1"){ 
  dec_snack=*snackarr;
  snapr=3; //here is the price
  cout<<endl;
  }
  else if(dec_snack=="2"){
  dec_snack=*(snackarr+1);
  snapr=15;
  cout<<endl;
  }
  else if(dec_snack=="3"){
  dec_snack=*(snackarr+2);
  snapr=9;
  cout<<endl;
  }
  else if(dec_snack=="4"){
  dec_snack=*(snackarr+3);
  snapr=6;
  cout<<endl;
  }
  else if(dec_snack=="5"){
  dec_snack=*(snackarr+4);
  snapr=13;
  cout<<endl;
  }
  else if(dec_snack=="6"){
  dec_snack=*(snackarr+5);
  snapr=3;
  cout<<endl;
}

 
// Calls function from first name space. 
first_snak::func(dec_snack); 
// Calls function from second name space. 
//second_snak::func(dec_snack);


cout<<"-------------------------------------------------"<<endl;//displaying the whole information
cout<< " Here is your information: "<<endl;
cout<<"--Name: "<<i.fname<<" "<<i.lname<<endl;
cout<<"--Age: "<<i.age<<endl;
cout<<"--Gender: "<<i.gender<<endl;
cout<<"--Current height: "<<i.height<<endl;
cout<<"--Current weight: "<<i.weight<<endl; 
cout<<"--The perfect weight for you is: "<<perfect<<endl;
cout<<"--Your goal is: "<<goal<<endl;
cout<<"--------------"<<endl;
cout<<"--Your "<<end1<<endl;
cout<<"--Your "<<end2<<endl;
cout<<"--Your "<<end3<<endl;
bill(br_pr,lu_pr, din_pr,snapr); // function of the bill


ofstream outfile, appfile; //output of the file
ifstream infile;// create input file object named infile

double hourm,r ;
	infile.open("mealfile.txt",ios::in);
	outfile.open("mealfile.txt",ios::out);
	appfile.open("mealfile.txt",ios::app);
	if(infile.is_open()==true &&outfile.is_open()==true && appfile.is_open()==true){
	cout<<"file is opened! "<<endl;
	appfile<<"How many hours between meals : ";
	cout<<"How many hours between meals : "<<endl;
	cin>>hourm;
	appfile<<hourm<<endl;
	appfile<<"Please rate the diet starting from 1 to 5 : ";
	cout<<"Please rate the diet starting from 1 to 5 : "<<endl; //Make the user rate our program
	cin>>r;
	appfile<<r<<endl;}
infile.close() ; outfile.close();  appfile.close();
return 0;
}


