#include<iostream>
using namespace std;
class Book {
	int book_isbn;
	char name[30];
	char author_name[40];
	char publisher_name[50];
	public:
		void getBookinfo(){
			cout<<"Enter book isbn no."<<endl;
			cin>>book_isbn;
			cout<<"Enter name"<<endl;
			cin>>name;
			cout<<"Enter author"<<endl;
			cin>>author_name;
			cout<<"Enter publisher"<<endl;
			cin>>publisher_name;
		}
		void Display(){
			cout<<"Book isbn is \t"<<book_isbn<<endl;
			cout<<"Book name is \t"<<name<<endl;
			cout<<"Book author name is \t"<<author_name<<endl;
			cout<<"Book publisher name is \t"<<publisher_name<<endl;
		}
};
int main()
{
	Book b1;
	b1.getBookinfo();
	b1.Display();
	return 0;
}
