//EDITOR HTML:
#include<iostream>
#include<fstream>
using namespace std;

class HTML{
	private:
	string Prefisso="Intestazione(apri html):";
	string Testa="Testa:";
	string Corpo="Corpo:";
	string Piedi="Piedi:";
	string finePrefisso="chiudi html:";
	
	public:
		Inizio(string i ,string t, string c, string p,string fp, string Programming, string Programming2,string Programming3,string Programming4,string Programming5){			
		i=Prefisso;
		t=Testa;
		c=Corpo;
		p=Piedi;
		fp=finePrefisso;
		
		cout<<i<<endl;
		cin>>Programming;
		cout<<t<<endl;
		cin>>Programming2;
		cout<<c<<endl;
		cin>>Programming3;
		cout<<p<<endl;
		cin>>Programming4;
		cout<<fp<<endl;
		cin>>Programming5;
		}
};



int main(){
	HTML object;
	string riga;
	string a,b,c,d,e,f,g,h,i,l;
	char z[100];
	cout<<"EDITOR HTML:"<<endl<<endl;
	cout<<"PREMI UN QUALSIASI TASTO PER INIZIARE A PROGRAMMARE IN HTML:"<<" ";
	cin>>z;
	system("cls");
	ofstream output("EDITOR DI TESTO.html",ios::app);
	if(!output){
		cout<<"ERRORE,durante l'apertura del FILE..."<<endl;
	}else{

	cout<<object.Inizio(a,b,c,d,e,f,g,h,i,l)<<endl;	
	}
	cout<<"digita qualsiasi tasto per visualizzare ciò che hai scritto:"<<" ";
	cin>>z;
		ifstream input("EDITOR DI TESTO.html");
	if(!input){
		cout<<"ERRORE,durante l'apertura del FILE..."<<endl;
	}else{
		while(input>>riga){
			cout<<object.Inizio(a,b,c,d,e,f,g,h,i,l)<<endl;
		}
	}
	output.close();
	return 0;
}
