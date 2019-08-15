

	/* COMPUTER SCIENCE INVESTEGATORY PROJECT WORK

		   CANTEEN MANAGEMENT SYSTEM

	Made by	:Vikas Malviya
	Class   :12th Science
	Roll No.:26
	School  :Kendriya Vidyalaya No. 3 Army Cantt Gandhinagar */

//Header Files
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<iomanip.h>
#include<process.h>

	int c1,sno,scno,noi=0,i,qty;
	char e1,ic[20],bm,dbo;
	char uname[40],urank[3],cname[40],crank[3];
	char iname[20][40]={"Gooday Biscute     ",
		"Pepsodent          ",
		"Denim Powder       ",
		"Munch              ",
		"Park Avenue Perfume",
		"Coconut Hairoil    ",
		"Titan Watch        ",
		"Lux Soap           ",
		"Tide               ",
		"Reebok Shoes       ",
		"Maggi Noodles      ",
		"Fastrack Bag       ",
		"Cadbury Dairymilk  ",
		"Milons Pickle      ",
		"Sunsilk Shampoo    ",
		"Boroplus Cream     ",
		"Dettol Soap        ",
		"Colgate            ",
		"Himalaya Facewash  ",
		"Kurkure            "};
	int price[20]={15,70,65,10,200,55,1500,25,95,2190,12,600,10,152,115,45,32,85,50,25};
	char icode[20]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'};
	int GTotal=0,tot=0;
	int k=0,bno=101;

void Dlist()          //Function for displaying item details
{
	int i=0;
	cout<<"\n\tItem               \tPrice\tItem Code";
	for(i=0;i<20;i++)
	{
		cout<<"\n\t"<<iname[i];
		cout<<setw(5)<<"\t"<<price[i];
		cout<<"\t"<<icode[i];
	}
	cout<<"\n----------------------------------------------------------------------------";
}

class Billing
{

	char b1[40][40];
	int qnty[40],total[40],b2[40];

	public:
		void IBill(int n,int qty,int tot)	//Function for initialisation of bill
		{

			strcpy(b1[k],iname[n]);
			b2[k]=price[n];
			qnty[k]=qty;
			total[k]=tot;
			GTotal=GTotal+tot;
			k=k++;
		}
		void DBill();

}b;
void Billing :: DBill()               //Display bill
{
			cout<<"\n\n\n-------------------------------------------------------------------------------";
			cout<<"\n-------------------------------------------------------------------------------";
			cout<<"\n\t\t\tCANTEEN BILL";
			cout<<"\n\tSalesman: "<<urank<<" "<<uname;
			cout<<"\n\tBill Number:"<<bno;
			cout<<"\n.................................................................";
			cout<<"\n\tItem               \tPrice\tQuantity\tSub-Total";
			cout<<"\n.................................................................";
			for(k=0;k<noi;k++)
			{
				cout<<"\n\t"<<b1[k];
				cout<<setw(5)<<"\t"<<b2[k];
				cout<<"\t"<<qnty[k];
				cout<<"\t\t"<<total[k];
			}
			cout<<"\n.................................................................";
			cout<<"\n\tGrand Total:       \t     \t       \t\t"<<GTotal;
			cout<<"\n.................................................................";
			cout<<"\n\tThank You!!!\n\tPlease Visit Again.\n\tItems once sold will not be exchanged or replaced.\n\n";
			bno=bno++;
}
void main()
{

	clrscr();
	cout<<"\n\t			~~~~~~~~~~~~~		";
	cout<<"\n\t		     ~~ ~ ~ ~ ~ ~ ~ ~ ~~	";
	cout<<"\n\t		   ~~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~~	";
	cout<<"\n\t 		 ~~ ~ ~ ~ ~	  ~ ~ ~ ~ ~~	";
	cout<<"\n\t 	       ~~ ~ ~ ~ ~ ~WELCOME~ ~ ~ ~ ~ ~~	";
	cout<<"\n\t		 ~~ ~ ~ ~ ~       ~ ~ ~ ~ ~~	";
	cout<<"\n\t		   ~~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~~      ";
	cout<<"\n\t		     ~~	~ ~ ~ ~ ~ ~ ~ ~~	";
	cout<<"\n\t			~~~~~~~~~~~~~		";
	cout<<"\n\n\n\n\t*WELCOME TO CANTEEN STORES DEPARTMENT*";
	cuser:
	cout<<"\n\n\tEnter user details:\n\t1.Enter your name:";
	gets(uname);
	cout<<"\t2.Enter your rank:";
	gets(urank);
	again :
	cout<<"\n\tThank you, Now please enter your choice(1,2,3,4):";
	cout<<"\n\t1.Menu & Purchase\n\t2.Items available\n\t3.Canteen Information\n\t4.Change User\n\t5.Exit\n\t";
	cin>>c1;
	noi=0,GTotal=0,k=0,tot=0;
	strcpy(ic,'\0');
	switch(c1)
	{
		case 1 :
			clrscr();
			cout<<"\n\tConsumer Information:\n\tName:";
			gets(cname);
			cout<<"\n\tRank:";
			gets(crank);
			cout<<"\n\tService Number:";
			cin>>sno;
			cout<<"\n\tSmart Card Number:";
			cin>>scno;
			cout<<"\n\n\n\t\tItem List";
			buy:
			Dlist();
			cout<<"\n\n\tEnter the codes of the item you want to buy:\n\t";
			cin>>ic;
			cout<<"Item Code:"<<ic;
			noi=noi+strlen(ic);
			for(i=0,qty=0;i<noi;i++)
			{
				switch(ic[i])
				{
					case 'a':cout<<"\n\n\tGooday Biscuit";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*15;
						tot=qty*15;
						b.IBill(0,qty,tot);
						break;


					case 'b':cout<<"\n\n\tPepsodent";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*70;
						tot=qty*70;
						b.IBill(1,qty,tot);
						break;


					case 'c':cout<<"\n\n\tDenim Powder";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*65;
						tot=qty*65;
						b.IBill(2,qty,tot);
						break;


					case 'd':cout<<"\n\n\tMunch";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*10;
						tot=qty*10;
						b.IBill(3,qty,tot);
						break;


					case 'e':cout<<"\n\n\tPark Avenue Perfume";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*200;
						tot=qty*200;
						b.IBill(4,qty,tot);
						break;


					case 'f':cout<<"\n\n\tCoconut Hairoil";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*55;
						tot=qty*55;
						b.IBill(5,qty,tot);
						break;


					case 'g':cout<<"\n\n\tTitan Watch";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*1500;
						tot=qty*1500;
						b.IBill(6,qty,tot);
						break;


					case 'h':cout<<"\n\n\tLux Soap";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*25;
						tot=qty*25;
						b.IBill(7,qty,tot);
						break;


					case 'i':cout<<"\n\n\tTide";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*95;
						tot=qty*95;
						b.IBill(8,qty,tot);
						break;


					case 'j':cout<<"\n\n\tReebok Shoes";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*2190;
						tot=qty*2190;
						b.IBill(9,qty,tot);
						break;


					case 'k':cout<<"\n\n\tMaggi Noodles";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*12;
						tot=qty*12;
						b.IBill(10,qty,tot);
						break;


					case 'l':cout<<"\n\n\tFastrack Bag";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*600;
						tot=qty*600;
						b.IBill(11,qty,tot);
						break;


					case 'm':cout<<"\n\n\tCadbury Dairymilk";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*10;
						tot=qty*10;
						b.IBill(12,qty,tot);
						break;


					case 'n':cout<<"\n\n\tMilons Pickle";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*152;
						tot=qty*152;
						b.IBill(13,qty,tot);
						break;


					case 'o':cout<<"\n\n\tSunsilk Shampoo";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*115;
						tot=qty*115;
						b.IBill(14,qty,tot);
						break;


					case 'p':cout<<"\n\n\tBoroplus Cream";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*45;
						tot=qty*45;
						b.IBill(15,qty,tot);
						break;


					case 'q':cout<<"\n\n\tDettol Soap";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*32;
						tot=qty*32;
						b.IBill(16,qty,tot);
						break;


					case 'r':cout<<"\n\n\tColgate";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*85;
						tot=qty*85;
						b.IBill(17,qty,tot);
						break;


					case 's':cout<<"\n\n\tHimalaya Facewash";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*50;
						tot=qty*50;
						b.IBill(18,qty,tot);
						break;


					case 't':cout<<"\n\n\tKurkure";
						cout<<"\n\tEnter Quantity:";
						cin>>qty;
						cout<<"\n\tTotal Price:"<<qty*25;
						tot=qty*25;
						b.IBill(19,qty,tot);
						break;


					default :
						cout<<"\n\n\n\t\tWrong choice.\n";


				}
			}
			cout<<"\n\tWant to buy more(y/n)?:";
			cin>>bm;
			if(bm=='y' || bm=='Y')
			{
				goto buy;
			}
			else
			{
				cout<<"\n\n\t\tYour bill is processed.\n\t Want to see it(y/n)?";
				cin>>dbo;
				if(dbo=='y' || dbo=='Y')
				{
					b.DBill();
				}
				else
				{
					cout<<"\n\tThank You!!!\n\tPlease Visit Again.";
				}
			}
			goto again;


		case 2 :
			clrscr();                                            //DIPLAY OF LIST OF ITEMS
			cout<<"\n\n\t\tItem List\n";
			Dlist();
			goto again;


		case 3 :
			clrscr();                                              //CANTEEN information
			cout<<"----------------------------------------------------------------";
			cout<<"\n\n\tCanteen Details";
			cout<<"\n\t>>Timing:0900hrs - 1300hrs";
			cout<<"\n\t>>Canteen will be closed on Monday";
			cout<<"\n\t>>Goods once sold will not be exchanged or replaced";
			cout<<"\n\t>>Take your Smart Card with you";
			cout<<"\n\t>>Collect your Bill and Smart Card after payment";
			cout<<"\n\t>>Do not break any canteen items";
			cout<<"\n----------------------------------------------------------------";
			goto again;


		case 4 :
			clrscr();
			goto cuser;


		case 5 :
			cout<<"\n\tAre you sure you want to exit(y/n):";      //Exit
			cin>>e1;
			if(e1=='y' || e1=='Y')
			{
				exit(0);
			}
			else
			{
				goto again;
			}


		default :
			clrscr();
			cout<<"\n\n\tWrong choice.";
			goto again;

	}

	getch();

}