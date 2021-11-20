#include<iostream>
#include<vector>
#include <conio.h>
using namespace std;
//Options Menu
class BookInventory {
    private:
    string author;
    string publisher;
    string title;
    double price;
    int copies;
    public:
    BookInventory(string auth, string pub, string tit, double value, int prints){
        this -> author = auth;
        this -> publisher = pub;
        this -> title = tit;
        this -> price = value;
        this -> copies = prints;
    }
    string getTitle();  
    string getAuthor();
    string getPublisher();
    double getPrice();
    int getCopies();
};
string BookInventory :: getTitle(){
    return title;
}
string BookInventory :: getAuthor(){
    return author;
}
string BookInventory :: getPublisher(){
    return publisher;
}
double BookInventory :: getPrice(){
    return price;
}
int BookInventory :: getCopies(){
    return copies;
}
int main(){
    int choice;
    string author;
    string publisher;
    string title;
    double price;
    int copies;
    vector <BookInventory> bookVector;
    while (true)
    {
        cout<<"!!!!!!!!!!!!!!! Please choose 1 option !!!!!!!!!!!!!!!"<<"\n";
        cout<<"0.Exit"<<"\n"<<"1.Add new book"<<"\n"<<"2.Search book"<<"\n";
        cin>>choice;
        if(choice==0)
            break;
        else if(choice==1){
            cout<<"Enter author name: "<<"\n";
            cin>>author;
            cout<<"Enter title of a book: "<<"\n";
            cin>>title;
            cout<<"Enter price of a book: "<<"\n";
            cin >> price;
            cout<<"Enter publisher of a book: "<<"\n";
            cin>>publisher;
            cout<<"Copies available: ";
            cin>>copies;
            BookInventory books1(author, publisher, title, price, copies);
            bookVector.push_back(books1);
            cout<<"Book is added!";
        }
        else if(choice==2){
            cout<<"Enter title of a book:";
            cin>>title;
            for(BookInventory it : bookVector){
                if(it.getTitle()==title){
                    cout<<"Required book is available"<<"\n";
                    cout<<"How many copies u required ?"<<"\n";
                    cin>>copies;
                    if(copies > it.getCopies()){
                        cout<<"Required copies aren't available"<<"\n";
                    }
                    else{
                        cout<<"Total cost:"<<(it.getPrice()*copies);
                        cout<<"\n"<<"Title of a book: "<<it.getTitle()<<"\n";
                        cout<<"Author of a book: "<<it.getAuthor()<<"\n";
                        cout<<"Publisher of a book: "<<it.getPublisher()<<"\n";
                        cout<<"Price of a book: "<<it.getPrice();
                    }
                }
                else{
                    cout<<"Sorry book isn't available"<<"\n";
                }
            }

        }
        else 
            cout<<"Invalid choice"<<"\n";
        cout<<"\n"<<"Press enter to continue";
        getch();

    }
    cout<<"Thank You!";
}


