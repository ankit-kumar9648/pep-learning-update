#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>

class product
{
public:
	char product_name[30];
	int product_id;
	int quantity;
	char category[30];
	float price;
	float total_price;

	void getdata();
	void showdata();
	void showall();
};

void product::getdata()
{
	cout<<"\n\n\t\t ************************";
	cout<<"\n\n\t\t # ENTER PRODUCT RECORD #";
	cout<<"\n\n\t\t ************************";

	cout<<"\n\n\t\t # Product ID      :--> ";
	cin>>product_id;

	cout<<"\n\n\t\t # Product Name    :--> ";
	gets(product_name);

	cout<<"\n\n\t\t # Quantity        :--> ";
	cin>>quantity;

	cout<<"\n\n\t\t # Category        :--> ";
	gets(category);

	cout<<"\n\n\t\t # Price           :--> ";
	cin>>price;

	total_price=quantity*price;
}

void product::showdata()
{
	cout<<"\n\n\t\t **********************";
	cout<<"\n\n\t\t # PRODUCT DETAILS #";
	cout<<"\n\n\t\t **********************";

	cout<<"\n\n\t\t # Product ID     : "<<product_id;
	cout<<"\n\n\t\t # Product Name   : "<<product_name;
	cout<<"\n\n\t\t # Quantity       : "<<quantity;
	cout<<"\n\n\t\t # Category       : "<<category;
	cout<<"\n\n\t\t # Price          : "<<price;
	cout<<"\n\n\t\t # Total Price    : "<<total_price;

	getch();
}

void product::showall()
{
	cout<<"\n\n\t"<<product_id<<"\t";
	cout<<product_name<<"\t";
	cout<<category<<"\t";
	cout<<quantity<<"\t";
	cout<<price<<endl;
}

/************************************************
	Function Prototypes
************************************************/

void product_record();
void add_product();
void list_product();
void search_product();
void update_product();
void delete_product();

/************************************************/

class customer
{
public:
	char customer_name[30];
	int customer_id;
	int age;
	char address[30];
	int phone;

	void getdata();
	void showdata();
	void showall();
};

void customer::getdata()
{
	cout<<"\n\n\t\t *************************";
	cout<<"\n\n\t\t # ENTER CUSTOMER RECORD #";
	cout<<"\n\n\t\t *************************";

	cout<<"\n\n\t\t # Customer ID    :--> ";
	cin>>customer_id;

	cout<<"\n\n\t\t # Customer Name  :--> ";
	gets(customer_name);

	cout<<"\n\n\t\t # Age            :--> ";
	cin>>age;

	cout<<"\n\n\t\t # Address        :--> ";
	gets(address);

	cout<<"\n\n\t\t # Phone Number   :--> ";
	cin>>phone;
}

void customer::showdata()
{
	cout<<"\n\n\t\t ***********************";
	cout<<"\n\n\t\t # CUSTOMER DETAILS #";
	cout<<"\n\n\t\t ***********************";

	cout<<"\n\n\t\t # Customer ID    : "<<customer_id;
	cout<<"\n\n\t\t # Customer Name  : "<<customer_name;
	cout<<"\n\n\t\t # Age            : "<<age;
	cout<<"\n\n\t\t # Address        : "<<address;
	cout<<"\n\n\t\t # Phone Number   : "<<phone;

	getch();
}

void customer::showall()
{
	cout<<"\n\n\t"<<customer_id<<"\t";
	cout<<customer_name<<"\t";
	cout<<age<<"\t";
	cout<<phone<<endl;
}

/************************************************/

void customer_record();
void add_customer();
void list_customer();
void search_customer();
void update_customer();
void delete_customer();

/************************************************/

class purchase
{
public:
	int bill_no;
	int product_id;
	int customer_id;
	int quantity;
	int day;
	int month;
	int year;

	void getdata();
	void showdata();
	void showall();
};

void purchase::getdata()
{
	cout<<"\n\n\t\t ************************";
	cout<<"\n\n\t\t # PURCHASE DETAILS #";
	cout<<"\n\n\t\t ************************";

	cout<<"\n\n\t\t # Bill Number    :--> ";
	cin>>bill_no;

	cout<<"\n\n\t\t # Quantity       :--> ";
	cin>>quantity;

	cout<<"\n\n\t\t # Day            :--> ";
	cin>>day;

	cout<<"\n\n\t\t # Month          :--> ";
	cin>>month;

	cout<<"\n\n\t\t # Year           :--> ";
	cin>>year;
}

void purchase::showdata()
{
	cout<<"\n\n\t\t ***********************";
	cout<<"\n\n\t\t # PURCHASE RECORD #";
	cout<<"\n\n\t\t ***********************";

	cout<<"\n\n\t\t # Bill Number    : "<<bill_no;
	cout<<"\n\n\t\t # Customer ID    : "<<customer_id;
	cout<<"\n\n\t\t # Product ID     : "<<product_id;
	cout<<"\n\n\t\t # Quantity       : "<<quantity;
	cout<<"\n\n\t\t # Date           : ";
	cout<<day<<"/"<<month<<"/"<<year;

	getch();
}

void purchase::showall()
{
	cout<<"\n\n\t"<<bill_no<<"\t";
	cout<<customer_id<<"\t";
	cout<<product_id<<"\t";
	cout<<quantity<<endl;
}

/************************************************/

void purchase_record();
void list();
void product_wise();
void customer_wise();
void date_wise();

/************************************************/

fstream f1,f2,f3;
product ob1;
customer ob2;
purchase ob3;

void main()
{
	clrscr();

	int ch;

	do
	{
		cout<<"\n\n\n";
		cout<<"\t=====================================\n";
		cout<<"\t   GROCERY MANAGEMENT SYSTEM\n";
		cout<<"\t=====================================\n";

		cout<<"\n\t1. Product Record";
		cout<<"\n\t2. Customer Record";
		cout<<"\n\t3. Purchase";
		cout<<"\n\t4. Listing";
		cout<<"\n\t5. Exit";

		cout<<"\n\n\tEnter Your Choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				clrscr();
				product_record();
				break;

			case 2:
				clrscr();
				customer_record();
				break;

			case 3:
				clrscr();
				purchase_record();
				break;

			case 4:
				clrscr();
				list();
				break;

			case 5:
				break;

			default:
				cout<<"\n\nInvalid Choice";
				getch();
		}

	}while(ch!=5);
}

//********** FUNCTION OF PRODUCT RECORD **********

void product_record()
{
	clrscr();
	int pch;

	do
	{
		cout<<"\n\n\t\t****************";
		cout<<"\n\n\t\tOption-Product";
		cout<<"\n\n\t\t****************";

		cout<<"\n\n\t\t1. Add Product";
		cout<<"\n\n\t\t2. List All Products";
		cout<<"\n\n\t\t3. Search Product";
		cout<<"\n\n\t\t4. Update Product";
		cout<<"\n\n\t\t5. Delete Product";
		cout<<"\n\n\t\t6. Back To Main Menu";

		cout<<"\n\n\t\tEnter Your Choice : ";
		cin>>pch;

		switch(pch)
		{
			case 1:
				clrscr();
				add_product();
				break;

			case 2:
				clrscr();
				list_product();
				break;

			case 3:
				clrscr();
				search_product();
				break;

			case 4:
				clrscr();
				update_product();
				break;

			case 5:
				clrscr();
				delete_product();
				break;

			case 6:
				clrscr();
				break;

			default:
				cout<<"\n\n\tInvalid Choice";
				getch();
		}

	}while(pch!=6);

	clrscr();
}

//********** ADD PRODUCT **********

void add_product()
{
	char yn;

	f1.open("product.dat",ios::in|ios::out|ios::ate);

	ob1.getdata();

	cout<<"\n\n\tDo You Want To Save Record (Y/N) : ";
	cin>>yn;

	if(yn=='Y'||yn=='y')
	{
		f1.write((char *)&ob1,sizeof(ob1));
		cout<<"\n\n\tRecord Saved Successfully...";
	}
	else
	{
		cout<<"\n\n\tRecord Not Saved...";
	}

	f1.close();

	getch();
	clrscr();
}

//********** SEARCH PRODUCT **********

void search_product()
{
	int id;
	int c=0;

	cout<<"\n\n\tEnter Product ID : ";
	cin>>id;

	f1.open("product.dat",ios::in);

	while(f1.read((char *)&ob1,sizeof(ob1)))
	{
		if(id==ob1.product_id)
		{
			c=1;
			break;
		}
	}

	if(c==0)
	{
		cout<<"\n\n\tRecord Not Found";
		getch();
		f1.close();
		return;
	}

	ob1.showdata();

	f1.close();
	clrscr();
}

//********** UPDATE PRODUCT **********

void update_product()
{
	int id;
	int c=0;
	char yn;

	cout<<"\n\n\tEnter Product ID : ";
	cin>>id;

	f1.open("product.dat",ios::in|ios::out|ios::ate);

	f1.seekg(0);

	while(f1.read((char *)&ob1,sizeof(ob1)))
	{
		if(id==ob1.product_id)
		{
			c=1;
			break;
		}
	}

	f1.clear();

	if(c==0)
	{
		cout<<"\n\n\tRecord Not Found";
		getch();
		f1.close();
		return;
	}

	int pos=f1.tellp();

	f1.seekp(pos-sizeof(ob1));

	ob1.showdata();

	cout<<"\n\n\tModify Price (Y/N) : ";
	cin>>yn;

	if(yn=='Y'||yn=='y')
	{
		cout<<"\n\n\tEnter New Price : ";
		cin>>ob1.price;

		ob1.total_price=ob1.quantity*ob1.price;

		f1.write((char *)&ob1,sizeof(ob1));

		cout<<"\n\n\tRecord Updated...";
	}
	else
	{
		cout<<"\n\n\tRecord Not Updated...";
	}

	f1.close();

	getch();
	clrscr();
}

//********** LIST PRODUCTS **********

void list_product()
{
	clrscr();

	cout<<"\n\n";
	cout<<"---------------------------------------------------------------";
	cout<<"\nID\tNAME\tCATEGORY\tQTY\tPRICE";
	cout<<"\n---------------------------------------------------------------";

	f1.open("product.dat",ios::in);

	while(f1.read((char *)&ob1,sizeof(ob1)))
	{
		ob1.showall();
	}

	f1.close();

	getch();
	clrscr();
}

//********** DELETE PRODUCT **********

void delete_product()
{
	int id;
	int c=0;

	cout<<"\n\n\tEnter Product ID : ";
	cin>>id;

	f1.open("product.dat",ios::in);
	f2.open("temp.dat",ios::out);

	while(f1.read((char *)&ob1,sizeof(ob1)))
	{
		if(id!=ob1.product_id)
			f2.write((char *)&ob1,sizeof(ob1));
		else
			c=1;
	}

	f1.close();
	f2.close();

	if(c==0)
	{
		cout<<"\n\n\tRecord Not Found";
		getch();
		return;
	}

	remove("product.dat");
	rename("temp.dat","product.dat");

	cout<<"\n\n\tRecord Deleted Successfully...";

	getch();
	clrscr();
}

//********** FUNCTION OF CUSTOMER RECORD **********

void customer_record()
{
	clrscr();
	int cch;

	do
	{
		cout<<"\n\n\t\t*****************";
		cout<<"\n\n\t\tOption-Customer";
		cout<<"\n\n\t\t*****************";

		cout<<"\n\n\t\t1. Add Customer";
		cout<<"\n\n\t\t2. List All Customer";
		cout<<"\n\n\t\t3. Search Customer";
		cout<<"\n\n\t\t4. Update Customer";
		cout<<"\n\n\t\t5. Delete Customer";
		cout<<"\n\n\t\t6. Back To Main Menu";

		cout<<"\n\n\t\tEnter Your Choice : ";
		cin>>cch;

		switch(cch)
		{
			case 1:
				clrscr();
				add_customer();
				break;

			case 2:
				clrscr();
				list_customer();
				break;

			case 3:
				clrscr();
				search_customer();
				break;

			case 4:
				clrscr();
				update_customer();
				break;

			case 5:
				clrscr();
				delete_customer();
				break;

			case 6:
				clrscr();
				break;

			default:
				cout<<"\n\n\tInvalid Choice";
				getch();
		}

	}while(cch!=6);

	clrscr();
}

//********** ADD CUSTOMER **********

void add_customer()
{
	char yn;

	f1.open("customer.dat",ios::in|ios::out|ios::ate);

	ob2.getdata();

	cout<<"\n\n\tDo You Want To Save Record (Y/N) : ";
	cin>>yn;

	if(yn=='Y'||yn=='y')
	{
		f1.write((char *)&ob2,sizeof(ob2));
		cout<<"\n\n\tRecord Saved Successfully...";
	}
	else
	{
		cout<<"\n\n\tRecord Not Saved...";
	}

	f1.close();

	getch();
	clrscr();
}

//********** SEARCH CUSTOMER **********

void search_customer()
{
	int id;
	int c=0;

	cout<<"\n\n\tEnter Customer ID : ";
	cin>>id;

	f1.open("customer.dat",ios::in);

	while(f1.read((char *)&ob2,sizeof(ob2)))
	{
		if(id==ob2.customer_id)
		{
			c=1;
			break;
		}
	}

	if(c==0)
	{
		cout<<"\n\n\tRecord Not Found";
		getch();
		f1.close();
		return;
	}

	ob2.showdata();

	f1.close();
	clrscr();
}

//********** UPDATE CUSTOMER **********

void update_customer()
{
	int id;
	int c=0;
	char yn;

	cout<<"\n\n\tEnter Customer ID : ";
	cin>>id;

	f1.open("customer.dat",ios::in|ios::out|ios::ate);

	f1.seekg(0);

	while(f1.read((char *)&ob2,sizeof(ob2)))
	{
		if(id==ob2.customer_id)
		{
			c=1;
			break;
		}
	}

	f1.clear();

	if(c==0)
	{
		cout<<"\n\n\tRecord Not Found";
		getch();
		f1.close();
		return;
	}

	int pos=f1.tellp();

	f1.seekp(pos-sizeof(ob2));

	ob2.showdata();

	cout<<"\n\n\tModify Phone Number (Y/N) : ";
	cin>>yn;

	if(yn=='Y'||yn=='y')
	{
		cout<<"\n\n\tEnter New Phone Number : ";
		cin>>ob2.phone;

		f1.write((char *)&ob2,sizeof(ob2));

		cout<<"\n\n\tRecord Updated...";
	}
	else
	{
		cout<<"\n\n\tRecord Not Updated...";
	}

	f1.close();

	getch();
	clrscr();
}

//********** LIST CUSTOMER **********

void list_customer()
{
	clrscr();

	cout<<"\n\n";
	cout<<"----------------------------------------------------------";
	cout<<"\nID\tNAME\tAGE\tPHONE";
	cout<<"\n----------------------------------------------------------";

	f1.open("customer.dat",ios::in);

	while(f1.read((char *)&ob2,sizeof(ob2)))
	{
		ob2.showall();
	}

	f1.close();

	getch();
	clrscr();
}

//********** DELETE CUSTOMER **********

void delete_customer()
{
	int id;
	int c=0;

	cout<<"\n\n\tEnter Customer ID : ";
	cin>>id;

	f1.open("customer.dat",ios::in);
	f2.open("temp.dat",ios::out);

	while(f1.read((char *)&ob2,sizeof(ob2)))
	{
		if(id!=ob2.customer_id)
			f2.write((char *)&ob2,sizeof(ob2));
		else
			c=1;
	}

	f1.close();
	f2.close();

	if(c==0)
	{
		cout<<"\n\n\tRecord Not Found";
		getch();
		return;
	}

	remove("customer.dat");
	rename("temp.dat","customer.dat");

	cout<<"\n\n\tRecord Deleted Successfully...";

	getch();
	clrscr();
}

//********** PURCHASE MODULE **********

void purchase_record()
{
	clrscr();

	cout<<"\n\n\t\t*************************************";
	cout<<"\n\n\t\t******** PURCHASE PRODUCT ***********";
	cout<<"\n\n\t\t*************************************";

	int c1=0,c2=0;
	int pid,cid;

	//********** SEARCH PRODUCT **********

	cout<<"\n\n\tEnter Product ID : ";
	cin>>pid;

	f1.open("product.dat",ios::in|ios::out|ios::ate);
	f1.seekg(0);

	while(f1.read((char *)&ob1,sizeof(ob1)))
	{
		if(pid==ob1.product_id)
		{
			c1=1;
			break;
		}
	}

	f1.clear();

	if(c1==0)
	{
		cout<<"\n\n\tProduct Not Found";
		getch();
		f1.close();
		return;
	}

	ob1.showdata();

	//********** SEARCH CUSTOMER **********

	cout<<"\n\n\tEnter Customer ID : ";
	cin>>cid;

	f2.open("customer.dat",ios::in|ios::out|ios::ate);
	f2.seekg(0);

	while(f2.read((char *)&ob2,sizeof(ob2)))
	{
		if(cid==ob2.customer_id)
		{
			c2=1;
			break;
		}
	}

	f2.clear();

	if(c2==0)
	{
		cout<<"\n\n\tCustomer Not Found";
		getch();
		f1.close();
		f2.close();
		return;
	}

	ob2.showdata();

	getch();

	f1.close();
	f2.close();

	clrscr();

	//********** SAVE PURCHASE **********

	f3.open("purchase.dat",ios::in|ios::out|ios::ate);

	ob3.getdata();

	ob3.product_id=pid;
	ob3.customer_id=cid;

	f3.write((char *)&ob3,sizeof(ob3));

	cout<<"\n\n\tPurchase Record Saved Successfully...";

	getch();

	f3.close();
}

//******************************************************
//********************* LIST MENU ***********************
//******************************************************

void list()
{
	clrscr();

	int ch;

	do
	{
		cout<<"\n\n\t\t*****************************";
		cout<<"\n\n\t\t******** LIST MENU **********";
		cout<<"\n\n\t\t*****************************";

		cout<<"\n\n\t1. Product ID Wise";
		cout<<"\n\t2. Customer ID Wise";
		cout<<"\n\t3. Date Wise";
		cout<<"\n\t4. Return";

		cout<<"\n\n\tEnter Choice : ";
		cin>>ch;

		switch(ch)
		{
			case 1:
				clrscr();
				product_wise();
				break;

			case 2:
				clrscr();
				customer_wise();
				break;

			case 3:
				clrscr();
				date_wise();
				break;

			case 4:
				break;

			default:
				cout<<"\nInvalid Choice";
				getch();
		}

		clrscr();

	}while(ch!=4);
}

//********** PRODUCT ID WISE LIST **********

void product_wise()
{
	int c=0;
	int id;
	fstream f4;

	f4.open("temp.dat",ios::in|ios::out|ios::ate);

	cout<<"\n\n\tEnter Product ID : ";
	cin>>id;

	f1.open("purchase.dat",ios::in);
	f1.seekg(0);

	while(f1.read((char *)&ob3,sizeof(ob3)))
	{
		if(id==ob3.product_id)
		{
			c=1;
			f4.write((char *)&ob3,sizeof(ob3));
		}
	}

	f1.clear();
	f4.clear();

	if(c==0)
	{
		cout<<"\n\n\tRecord Not Found";
		getch();
		f1.close();
		f4.close();
		remove("temp.dat");
		return;
	}

	f4.seekg(0);

	while(f4.read((char *)&ob3,sizeof(ob3)))
	{
		ob3.showdata();
		getch();
	}

	f1.close();
	f4.close();

	remove("temp.dat");

	clrscr();
}

//********** CUSTOMER ID WISE LIST **********

void customer_wise()
{
	int c=0;
	int id;

	cout<<"\n\n\tEnter Customer ID : ";
	cin>>id;

	f1.open("purchase.dat",ios::in);
	f1.seekg(0);

	while(f1.read((char *)&ob3,sizeof(ob3)))
	{
		if(id==ob3.customer_id)
		{
			c=1;
			break;
		}
	}

	f1.clear();

	if(c==0)
	{
		cout<<"\n\n\tRecord Not Found";
		getch();
		f1.close();
		return;
	}

	ob3.showdata();

	getch();

	f1.close();

	clrscr();
}

//********** DATE WISE LIST **********

void date_wise()
{
	int d,m,y;
	int c=0;

	cout<<"\n\n\tEnter Day : ";
	cin>>d;

	cout<<"\n\n\tEnter Month : ";
	cin>>m;

	cout<<"\n\n\tEnter Year : ";
	cin>>y;

	f1.open("purchase.dat",ios::in);

	while(f1.read((char *)&ob3,sizeof(ob3)))
	{
		if(ob3.day==d && ob3.month==m && ob3.year==y)
		{
			c=1;
			ob3.showdata();
		}
	}

	if(c==0)
	{
		cout<<"\n\n\tNo Purchase Record Found";
	}

	getch();

	f1.close();

	clrscr();
}