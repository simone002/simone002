#include <iostream>
#include <fstream>
#include <string>

#include <list>
using namespace std;

class Nodelist{

    public:

    Nodelist(string value,Nodelist*precedente=nullptr,Nodelist*succ=nullptr):data(value),precedente(precedente),successore(succ){}

    string data;
    Nodelist*precedente;
    Nodelist*successore;
};

class Linkedlist{

    public:
    Linkedlist(){head=nullptr;}
    ~Linkedlist(){clear();}

    void clear(){
        Nodelist*current=head;
        while(current!=nullptr){
            Nodelist*tmp=current->successore;
            delete current;
            current=tmp;
        }
        head=nullptr;
    }

    void pushback(string value){
        if(head==nullptr){
            head=new Nodelist(value);
        } //case head point to null
        else{
            Nodelist*current=head;
            while(current->successore!=nullptr){
                current=current->successore;
            }
            Nodelist*Temp=new Nodelist(value,current);
            current->successore=Temp;
        }// caso in cui head punta a un elemento successivo

    }// aggiungere un elemento in coda

    void popback(){

        if(head==nullptr)
        {
            //case 0 element
            throw out_of_range("empty list");
        }
       if(head->successore==nullptr)
       {    
           //case we have one element
           delete head;
           head=nullptr;
       }
       else{
           Nodelist*current=head;
           while(current->successore!=nullptr){
               current=current->successore;
           }
            current->precedente->successore=nullptr;
            delete current;
       }
    } // elliminare un elemento in coda

    string front()
    {
        if(head==nullptr){
            throw out_of_range("no elements");
        }
        return head->data;
    }
    string back()
    {
        if(head==nullptr)
        {
            throw out_of_range("no elements");
        }
        Nodelist*current=head;
        while(current->successore!=nullptr)
        {
            current=current->successore;
        }
        return current->data;
    }

    string &scorrielemento(int elscor){
        Nodelist*current=head;
        int i=0;
        if(elscor==0){
            return current->data;
        }
        while(current->successore!=nullptr && i<elscor){
            current=current->successore;
            ++i;
        }
        return current->data;
    }

    string &operator[](int elscor){
        Nodelist*current=head;
        int i=0;
        if(elscor==0){
            return current->data;
        }
        while(current->successore!=nullptr && i<elscor){
            current=current->successore;
            ++i;
        }
        return current->data;
    }

    friend ostream&operator<<(ostream&os,const Linkedlist&a){
    Nodelist* iter = a.head;
    while(iter!=nullptr){
        os << iter->data << " --> ";
        iter = iter->successore;
    }
    cout << "NULL" << endl;
    return os;
    }
    int size(){
        int listsize=1;
        if(head==0){
            throw out_of_range("no element in list");
        }
        if(head->successore==nullptr){
            return 1;
        }
        else{
            Nodelist* iter=head;
            while(iter->successore!=nullptr){
                iter=iter->successore;
                ++listsize;
            }
        }
        return listsize;
    }

    void inserisci(Nodelist*precedente,string val){
    Nodelist*new_ptr = new Nodelist(val);
    new_ptr->data= val;
    new_ptr->successore=precedente->successore;
    precedente->successore= new_ptr;
    }

    void inseriscitesta(string val){
    Nodelist* nuovo = new Nodelist(val);
    nuovo->data = val;
    nuovo->successore = this->head;
    this->head = nuovo;
    }

    Nodelist*node(int scorel){
        Nodelist*current=head;
        int i=0;
        if(scorel==0){
            return current;
        }
        while(current->successore!=nullptr && i<scorel){
            current=current->successore;
            ++i;
        }
        return current->precedente;
    }

    
    private:

    
    Nodelist*head;
};

int main(){

    Linkedlist lista;


    fstream input_file;
    input_file.open("file.txt",ios::in);
    string line="";
    getline(input_file, line,';');
        

    lista.pushback(line);
    
    lista.pushback("cess");
    lista.pushback("baby");
   
    lista.inserisci(lista.node(0),"success");
    lista.inseriscitesta("questaèlatesta");

    
   // lista[1]="ciao";
    for(int i=0;i<lista.size();++i){
         lista.popback();
    }
    lista.popback();
    cout << lista;
    
    

    lista.clear();
    //cout << lista;
    
}