#include <iostream>
#include <cstring>
#include<process.h>
//#include<string.h>
using namespace std;
 struct element{			//a to struct for all variables to contain the elements variable
	int atomicNum[3][2];
	char name[114];
	char sym[114];
	double atomicWeight;
	}elem[114];
	
	void atomicNum(int num) // Function for intioliazing atomic num and storing the value in a pointer
	{
		int b=1;
		int a=1;
		int *pa=&a;
		for(a=1;a<=114;a++)		//checing the if input match the records
				{
				    if(num==a)
					{
						cout<<endl;
				cout<<endl<<endl;
				cout<<"\tNumber of the Atom :"<<"\t"<<*pa<<"."<<"\n\n\tThe location of the Value: "<<pa<<"."<<endl<<endl;
				cout<<"\tName of the Atom: "<<"\t"<<elem[a].name<<"."<<endl<<endl;
				cout<<"\tIt's'Symbol: "<<"\t\t"<<elem[a].sym<<"."<<endl<<endl;
				cout<<"\tThe weight of the Atom: "<<elem[a].atomicWeight<<"."<<endl;
				break;
					}
				}
			}
	
int main()
{ 
	int a=1,i=0,elem_in=0,num=0; //elem_in is switch, num is for atomic number
	char c=0;
	double w=0;       		     //w is for atomic weight
	
	char s[114],n[114],in[114];  //s is symbols, n is for names
	
	// intialzing atomic names + symobls
	{
					strcpy(elem[1].name,("Hydrogen"));			strcpy(elem[1].sym,("H"));
					strcpy(elem[2].name,("Helium"));			strcpy(elem[2].sym,("He"));
					strcpy(elem[3].name,("Lithium"));			strcpy(elem[3].sym,("Li"));
					strcpy(elem[4].name,("Beryllium"));			strcpy(elem[4].sym,("Be"));
					strcpy(elem[5].name,("Boron"));				strcpy(elem[5].sym,("B"));
					strcpy(elem[6].name,("Carbon"));			strcpy(elem[6].sym,("C"));
					strcpy(elem[7].name,("Nitrogen"));			strcpy(elem[7].sym,("N"));
					strcpy(elem[8].name,"Oxygen");				strcpy(elem[8].sym,"O");	
					strcpy(elem[9].name,"Fluorine");			strcpy(elem[9].sym,"F");
					strcpy(elem[10].name,"Neon");				strcpy(elem[10].sym,"Ne");
					strcpy(elem[11].name,"Sodium");				strcpy(elem[11].sym,"Na");
					strcpy(elem[12].name,"Magnesium");			strcpy(elem[12].sym,"Mg");
					strcpy(elem[13].name,"Aluminium");			strcpy(elem[13].sym,"Al");
					strcpy(elem[14].name,"Silicon");         	strcpy(elem[14].sym,"Si");
                    strcpy(elem[15].name,"Phosphorus");         strcpy(elem[15].sym,"P");
                    strcpy(elem[16].name,"Sulfur");             strcpy(elem[16].sym,"S");
                    strcpy(elem[17].name,"Chlorine");           strcpy(elem[17].sym,"Cl");
                    strcpy(elem[18].name,"Argon");              strcpy(elem[18].sym,"Ar");
                    strcpy(elem[19].name,"Potassium");          strcpy(elem[19].sym,"K");
                    strcpy(elem[20].name,"Calcium");      	    strcpy(elem[20].sym,"Ca");
                    strcpy(elem[21].name,"Scandium");           strcpy(elem[21].sym,"Sc");
                    strcpy(elem[22].name,"Titanium");           strcpy(elem[22].sym,"Ti");
                    strcpy(elem[23].name,"Vanadium");           strcpy(elem[23].sym,"V");
                    strcpy(elem[24].name,"Chromium");           strcpy(elem[24].sym,"Cr");
                    strcpy(elem[25].name,"Manganese");          strcpy(elem[25].sym,"Mn");
                    strcpy(elem[26].name,"Iron");               strcpy(elem[26].sym,"Fe");
                    strcpy(elem[27].name,"Cobalt");             strcpy(elem[27].sym,"Co");
                    strcpy(elem[28].name,"Nickel");             strcpy(elem[28].sym,"Ni");
                    strcpy(elem[29].name,"Copper");             strcpy(elem[29].sym,"Cu");
                    strcpy(elem[30].name,"Zinc");               strcpy(elem[30].sym,"Zn");
                    strcpy(elem[31].name,"Gallium");            strcpy(elem[31].sym,"Ga");
                    strcpy(elem[32].name,"Germanium");          strcpy(elem[32].sym,"Ge");
                    strcpy(elem[33].name,"Arsenic");            strcpy(elem[33].sym,"As");
                    strcpy(elem[34].name,"Selenium");           strcpy(elem[34].sym,"Se");
                    strcpy(elem[35].name,"Bromine");            strcpy(elem[35].sym,"Br");
                    strcpy(elem[36].name,"Krypton");            strcpy(elem[36].sym,"Kr");
                    strcpy(elem[37].name,"Rubidium");           strcpy(elem[37].sym,"Rb");
                    strcpy(elem[38].name,"Strontium");          strcpy(elem[38].sym,"Sr");
                    strcpy(elem[39].name,"Yttrium");            strcpy(elem[39].sym,"Y");
                    strcpy(elem[40].name,"Zirconium");          strcpy(elem[40].sym,"Zr");
                    strcpy(elem[41].name,"Niobium");            strcpy(elem[41].sym,"Nb");
                    strcpy(elem[42].name,"Molybdenum");         strcpy(elem[42].sym,"Mo");
                    strcpy(elem[43].name,"Technetium");         strcpy(elem[43].sym,"Tc");
                    strcpy(elem[44].name,"Ruthenium");          strcpy(elem[44].sym,"Ru");
                    strcpy(elem[45].name,"Rhodium");            strcpy(elem[45].sym,"Rh");
                    strcpy(elem[46].name,"Palladium"); 	        strcpy(elem[46].sym,"Pd");
                    strcpy(elem[47].name,"Silver");       	    strcpy(elem[47].sym,"Ag");
                    strcpy(elem[48].name,"Cadmium"); 	        strcpy(elem[48].sym,"Cd");
                    strcpy(elem[49].name,"Indium");	            strcpy(elem[49].sym,"In");
                    strcpy(elem[50].name,"Tin");        	    strcpy(elem[50].sym,"Sn");
                    strcpy(elem[51].name,"Antimony"); 	        strcpy(elem[51].sym,"Sb");
                    strcpy(elem[52].name,"Tellurium");          strcpy(elem[52].sym,"Te");
                    strcpy(elem[53].name,"Iodine");  	        strcpy(elem[53].sym,"I");
                    strcpy(elem[54].name,"Xenon"); 	            strcpy(elem[54].sym,"Xe");
                    strcpy(elem[55].name,"Caesium");	        strcpy(elem[55].sym,"Cs");
                    strcpy(elem[56].name,"Barium");	            strcpy(elem[56].sym,"Ba");
                    strcpy(elem[57].name,"Lanthanum");	        strcpy(elem[57].sym,"La");
                    strcpy(elem[58].name,"Cerium");	            strcpy(elem[58].sym,"Ce");
                    strcpy(elem[59].name,"Praseodymium"); 	    strcpy(elem[59].sym,"Pr");
                    strcpy(elem[60].name,"Neodymium"); 	        strcpy(elem[60].sym,"Nd");
                    strcpy(elem[61].name,"Promethium");         strcpy(elem[61].sym,"Pm");
                    strcpy(elem[62].name,"Samarium"); 	        strcpy(elem[62].sym,"Sm");
                    strcpy(elem[63].name,"Europium");           strcpy(elem[63].sym,"Eu");
                    strcpy(elem[64].name,"Gadolinium");         strcpy(elem[64].sym,"Gd");
                    strcpy(elem[65].name,"Terbium");            strcpy(elem[65].sym,"Tb");
                    strcpy(elem[66].name,"Dysprosium");         strcpy(elem[66].sym,"Dy");
                    strcpy(elem[67].name,"Holmium"); 	        strcpy(elem[67].sym,"Ho");
                    strcpy(elem[68].name,"Erbium");	            strcpy(elem[68].sym,"Er");
                    strcpy(elem[69].name,"Thulium");            strcpy(elem[69].sym,"Tm");
                    strcpy(elem[70].name,"Ytterbium");          strcpy(elem[70].sym,"Yb");
                    strcpy(elem[71].name,"Lutetium");           strcpy(elem[71].sym,"Lu");
                    strcpy(elem[72].name,"Hafnium");            strcpy(elem[72].sym,"Hf");
                    strcpy(elem[73].name,"Tantalum");           strcpy(elem[73].sym,"Ta");
                    strcpy(elem[74].name,"Tungsten");           strcpy(elem[74].sym,"W");
                    strcpy(elem[75].name,"Rhenium");            strcpy(elem[75].sym,"Re");
                    strcpy(elem[76].name,"Osmium");             strcpy(elem[76].sym,"Os");
                    strcpy(elem[77].name,"Iridium");        	strcpy(elem[77].sym,"Ir");
                    strcpy(elem[78].name,"Platinum");      	    strcpy(elem[78].sym,"Pt");
                    strcpy(elem[79].name,"Gold");       	    strcpy(elem[79].sym,"Au");
                    strcpy(elem[80].name,"Mercury");	        strcpy(elem[80].sym,"Hg");
                    strcpy(elem[81].name,"Thallium");      	    strcpy(elem[81].sym,"Tl");
                    strcpy(elem[82].name,"Lead");           	strcpy(elem[82].sym,"Pb");
                    strcpy(elem[83].name,"Bismuth");            strcpy(elem[83].sym,"Bi");
                    strcpy(elem[84].name,"Polonium"); 	        strcpy(elem[84].sym,"Po");
                    strcpy(elem[85].name,"Astatine"); 	        strcpy(elem[85].sym,"At");
                    strcpy(elem[86].name,"Radon");	            strcpy(elem[86].sym,"Rn");
                    strcpy(elem[87].name,"Francium");           strcpy(elem[87].sym,"Fr");
                    strcpy(elem[88].name,"Radium");	            strcpy(elem[88].sym,"Ra");
                    strcpy(elem[89].name,"Actinium");           strcpy(elem[89].sym,"Ac");
                    strcpy(elem[90].name,"Thorium");            strcpy(elem[90].sym,"Th");
                    strcpy(elem[91].name,"Protactinium");       strcpy(elem[91].sym,"Pa");
                    strcpy(elem[92].name,"Uranium");            strcpy(elem[92].sym,"U");
                    strcpy(elem[93].name,"Neptunium");          strcpy(elem[93].sym,"Np");
                    strcpy(elem[94].name,"Plutonium");          strcpy(elem[94].sym,"Pu");
                    strcpy(elem[95].name,"Americium");          strcpy(elem[95].sym,"Am");
                    strcpy(elem[96].name,"Curium");             strcpy(elem[96].sym,"Cm");
                    strcpy(elem[97].name,"Berkelium");          strcpy(elem[97].sym,"Bk");
                    strcpy(elem[98].name,"Californium");     	strcpy(elem[98].sym,"Cf");
                    strcpy(elem[99].name,"Einsteinium");        strcpy(elem[99].sym,"Es");
                    strcpy(elem[100].name,"Fermium");           strcpy(elem[100].sym,"Fm");
                    strcpy(elem[101].name,"Mendelevium");       strcpy(elem[101].sym,"Md");
                    strcpy(elem[102].name,"Nobelium");	        strcpy(elem[102].sym,"No");
                    strcpy(elem[103].name,"Lawrencium");    	strcpy(elem[103].sym,"Lr");
                    strcpy(elem[104].name,"Rutherfordium");	    strcpy(elem[104].sym,"Rf");
                    strcpy(elem[105].name,"Dubnium");	        strcpy(elem[105].sym,"Db");
                    strcpy(elem[106].name,"Seaborgium");    	strcpy(elem[106].sym,"Sg");
                    strcpy(elem[107].name,"Bohrium");           strcpy(elem[107].sym,"Bh");
                    strcpy(elem[108].name,"Hassium");	        strcpy(elem[108].sym,"Hs");
                    strcpy(elem[109].name,"Meitnerium");        strcpy(elem[109].sym,"Mt");
                    strcpy(elem[110].name,"Darmstadtium");      strcpy(elem[110].sym,"Ds");
                    strcpy(elem[111].name,"Roentgenium");	    strcpy(elem[111].sym,"Rg");
                    strcpy(elem[112].name,"Copernicium"); 	    strcpy(elem[112].sym,"Cn");
                    strcpy(elem[113].name,"Ununtrium");         strcpy(elem[113].sym,"Uut");
                    strcpy(elem[114].name,"Flerovium");         strcpy(elem[114].sym,"Fl");
    }
    
	// intializing atomic weight
    {
    	elem[1].atomicWeight=1.008;			elem[2].atomicWeight=4.002602;
    	elem[3].atomicWeight=6.94;			elem[4].atomicWeight=9.012182;
    	elem[5].atomicWeight=10.81;			elem[6].atomicWeight=12.011;
    	elem[7].atomicWeight=14.007;		elem[8].atomicWeight=15.999;
    	elem[9].atomicWeight=18.9984032;	elem[10].atomicWeight=20.1797;
    	elem[11].atomicWeight=22.98976928;	elem[12].atomicWeight=24.305;
    	elem[13].atomicWeight=26.9815386;	elem[14].atomicWeight=28.085;	
    	elem[15].atomicWeight=30.973762;	elem[16].atomicWeight=32.06;
    	elem[17].atomicWeight=35.45;		elem[18].atomicWeight=39.948;			
    	elem[19].atomicWeight=39.0983;		elem[20].atomicWeight=40.078;
    	elem[21].atomicWeight=44.955912;	elem[22].atomicWeight=47.867;
    	elem[23].atomicWeight=50.9415;		elem[24].atomicWeight=51.9961;
    	elem[25].atomicWeight=54.938045;	elem[26].atomicWeight=55.845;
    	elem[27].atomicWeight=58.933195;	elem[28].atomicWeight=58.6934;
    	elem[29].atomicWeight=63.546;		elem[30].atomicWeight=65.38;
    	elem[31].atomicWeight=69.723;		elem[32].atomicWeight=72.630;
    	elem[33].atomicWeight=74.92160;		elem[34].atomicWeight=78.96;
    	elem[35].atomicWeight=79.904;		elem[36].atomicWeight=83.798;
    	elem[37].atomicWeight=85.4678;		elem[38].atomicWeight=87.62;
    	elem[39].atomicWeight=88.90585;		elem[40].atomicWeight=91.224;
    	elem[41].atomicWeight=92.90638;		elem[42].atomicWeight=95.96;
    	elem[43].atomicWeight=98;			elem[44].atomicWeight=101.07;			 
    	elem[45].atomicWeight=102.90550;	elem[46].atomicWeight=106.42;
    	elem[47].atomicWeight=107.8682;		elem[48].atomicWeight=112.411;
    	elem[49].atomicWeight=114.818;		elem[50].atomicWeight=118.710;
    	elem[51].atomicWeight=121.760;		elem[52].atomicWeight=127.60;
    	elem[53].atomicWeight=126.90447;	elem[54].atomicWeight=131.293;
    	elem[55].atomicWeight=132.9054519;	elem[56].atomicWeight=137.327;
    	elem[57].atomicWeight=138.90547;	elem[58].atomicWeight=140.90765;
    	elem[59].atomicWeight=140.12765;	elem[60].atomicWeight=144.242;
    	elem[61].atomicWeight=145;			elem[62].atomicWeight=150.36;
    	elem[63].atomicWeight=151.964;		elem[64].atomicWeight=157.25;
    	elem[65].atomicWeight=158.92535;	elem[66].atomicWeight=162.500;
    	elem[67].atomicWeight=164.93032;	elem[68].atomicWeight=167.259;
    	elem[69].atomicWeight=168.93421;	elem[70].atomicWeight=173.054;
    	elem[71].atomicWeight=174.9668;		elem[72].atomicWeight=178.49;
    	elem[73].atomicWeight=180.94788;	elem[74].atomicWeight=183.84;
    	elem[75].atomicWeight=186.207;		elem[76].atomicWeight=190.23;
    	elem[77].atomicWeight=192.217;		elem[78].atomicWeight=195.084;
    	elem[79].atomicWeight=196.966569;	elem[80].atomicWeight=200.592;
    	elem[81].atomicWeight=204.38;		elem[82].atomicWeight=207.2;	
    	elem[83].atomicWeight=208.98040;	elem[84].atomicWeight=209;	
    	elem[85].atomicWeight=210;			elem[86].atomicWeight=222;
    	elem[87].atomicWeight=223;			elem[88].atomicWeight=226;
    	elem[89].atomicWeight=227;			elem[90].atomicWeight=232.03806;
    	elem[91].atomicWeight=231.03588;	elem[92].atomicWeight=238.02891;
    	elem[93].atomicWeight=237;			elem[94].atomicWeight=244;
    	elem[95].atomicWeight=243;			elem[96].atomicWeight=247;
    	elem[97].atomicWeight=247;			elem[98].atomicWeight=251;
    	elem[99].atomicWeight=252;			elem[100].atomicWeight=257;
    	elem[101].atomicWeight=258;			elem[102].atomicWeight=259;
    	elem[103].atomicWeight=262;			elem[104].atomicWeight=267;
    	elem[105].atomicWeight=268;			elem[106].atomicWeight=269;
    	elem[107].atomicWeight=270;			elem[108].atomicWeight=269;
    	elem[109].atomicWeight=278;			elem[110].atomicWeight=281;
    	elem[111].atomicWeight=281;			elem[112].atomicWeight=285;
    	elem[113].atomicWeight=286;			elem[114].atomicWeight=289;
	}
  	 system("COLOR 74"); //seting the color of the exe.
  	 
	 cout<<"\n\t\t\tTHE MODERN PERIODIC TABLE\n";
	 cout<<endl;
	cout<<"\t\t\tProject By: A"<<elem[1].sym<<"MED "<<elem[13].sym<<" "<<elem[56].sym<<"L"<<elem[8].sym<<elem[6].sym<<elem[1].sym<<elem[53].sym<<endl;
	
    cout<<"\t\t\t-------------------------\n";
    cout<<"\tH                                                      He"<<"\n\n";
    cout<<"\tLi Be                                 B  C   N  O   F  Ne"<<"\n\n";
    cout<<"\tNa Mg                                 Al Si  P  S   Cl Ar"<<"\n\n";
    cout<<"\tK  Ca Sc Ti V  Cr Mn Fe Co Ni Cu  Zn  Ga Ge  As Se  Br Kr"<<"\n\n";
    cout<<"\tRb Sr Y  Zr Nb Mo Tc Ru Rh Pd Ag  Cd  In Sn  Sb Te  I  Xe"<<"\n\n";
    cout<<"\tCs Ba La Hf Ta W  Re Os Ir Pt Au  Hg  Tl Pb  Bi Po  At Rn"<<"\n\n";
    cout<<"\tFr Ra Ac Rf Db Sg Bh Hs Mt Ds Uuu Uub -  Uuq -  Uuh"<<"\n\n\n";
    cout<<"\t\t Ce Pr Nd Pm Sm Eu Gd Tb Dy Ho Er Tm Yb Lu"<<"\n\n";
    cout<<"\t\t Th Pa U  Np Pu Am Cm Bk Cf Es Fm Md No Lr"<<"\n";		
	cout<<"\t\t\t-------------------------\n\n";
	 
	 // showing the menu to select from.
	
	do
    {
    	first:
	cout<<"\tSearch by Name Enter 1:";
	cout<<"\t\t\tSearch by Symbol Enter 2:"<<endl<<endl;
	cout<<"\tSearch by Atomic Number Enter 3:";
	cout<<"\tSearch by Atomic Weight Enter 4:"<<endl;
    start:
    	cout<<endl;
	cout<<"\t\t\t\tEnter your choice: "; //user input
	cin>>elem_in;
	system("cls");
	if(elem_in==1||elem_in==2||elem_in==3||elem_in==4)
	{
    

	
	
	switch(elem_in)   //for creating a menu to select a value from.
	{
		case 1:              //search by name of element
		
		system("cls");	 // is for clearing the screen of unwanter information
		cout<<"\tEnter the Name of the Element: ";
		cin>>n;
		cout<<endl;
  		while (n[i])		//checking the if input isalpha or not
  		{
    		if (isalpha(n[i]))
			{}
				else
				{
	  			cout<<"\tInput is not alphabetic.";
				break;		
				}
   			i++;
   		}
		
		n[0] = toupper(n[0]); //for converting the first letter from lower to upper
		
		for(a=1;a<=114;a++)  //checing the if input match the records
		{
	    	if(strcmp(n,elem[a].name)==0)   //?
        	{ 
        		cout<<endl<<endl;
				cout<<"\tNumber of the Atom :"<<"\t"<<a<<"."<<endl<<endl;
				cout<<"\tName of the Atom: "<<"\t"<<elem[a].name<<"."<<endl<<endl;
				cout<<"\tIt's'Symbol: "<<"\t\t"<<elem[a].sym<<"."<<endl<<endl;
				cout<<"\tThe weight of the Atom: "<<elem[a].atomicWeight<<"."<<endl;
				break;			
			}
		}
			if(strcmp(n,elem[a].name)==0)
			{
				break;
			}
			cout<<"\n\n\tThe entered value does not match our records."<<endl;
			
			
			break;
			
		
		case 2:              //search by symbol of element
		
			system("cls");	 // is for clearing the screen of unwanted information
			cout<<"\tEnter the Symbol of the Element: ";
			cin>>s;
			while (s[i])   	//checking the if input isalpha or not
  		{
    	if (isalpha(s[i]))
		{}
		else
		{
	  	cout<<"\n\tInput is not alphabetic."<<endl;
		break;		
		}
   		i++;
   		}
				
			s[0] = toupper(s[0]);		//for converting the first letter from lower to upper
			
			for(a=1;a<=114;a++)		//checing the if input match the records
			{
				if(strcmp(s,elem[a].sym)==0)		//?		
				{
					cout<<endl<<endl;
				cout<<"\tNumber of the Atom :"<<"\t"<<a<<"."<<endl<<endl;
				cout<<"\tName of the Atom: "<<"\t"<<elem[a].name<<"."<<endl<<endl;
				cout<<"\tIt's'Symbol: "<<"\t\t"<<elem[a].sym<<"."<<endl<<endl;
				cout<<"\tThe weight of the Atom: "<<elem[a].atomicWeight<<"."<<endl;
				break;		
				}
			}
			
		if(strcmp(s,elem[a].sym)==0)
			{
				break;
			}
			cout<<"\n\tThe entered value does not match our records."<<endl;
			break;
			
		
		case 3:                        //search by element numbers 
		
				system("cls");	 // is for clearing the screen of unwanter information
				cout<<"\tEnter the Number of the Element: ";
				cin>>num;
				
				if(!isdigit(num))      //checking the if the input is digit
				{}
			
				atomicNum(num);
				
				if(num==a)
				{
					break;
				}
				if(!num==a)
				{
				cout<<"\n\tWrong value please enter a Number try again.";
				break;
				}
				break;
		case 4:                 //atomic weight 
		
		    	system("cls");  // is for clearing the screen of unwanter information
		    	cout<<"\tEnter the exact Atomic Weight: ";
		    	cin>>w;
		    	if(!isdigit(w)&& !isalpha(w))		//checking the if the input is float
		    	{
		    	cout<<endl;
		    	for(a=1;a<=114;a++)		//checing the if input match the records
		    	{
		    		if(w==elem[a].atomicWeight)
		    		{
				cout<<"\tNumber of the Atom :"<<"\t"<<a<<"."<<endl<<endl;
				cout<<"\tName of the Atom: "<<"\t"<<elem[a].name<<"."<<endl<<endl;
				cout<<"\tIt's'Symbol: "<<"\t\t"<<elem[a].sym<<"."<<endl<<endl;
				cout<<"\tThe weight of the Atom: "<<elem[a].atomicWeight<<"."<<endl;
				break;
					}
				}
			}
			if(w==elem[a].atomicWeight)
			{
				break;
			}
			
				if(!w==elem[a].atomicWeight)
			{
			
			cout<<"\tWrong value enter a Float try again."<<endl;
			break;
			}
			
			default:  // a case for wrong input
			{
				cout<<"\t\t\tSorry wrong value please try again!"<<endl;	
			}	
	}
}


 end:
    cout<<"\n\n";
    system("PAUSE");
    system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\tWould you like to continue?(Y/N) ";
    cin>>c;
    if(c=='n' || c=='N')
    {
              exit(0);
    }
    system("cls");
    }while(c=='y' || c=='Y');


	return 0;
}
