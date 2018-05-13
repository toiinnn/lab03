#include <iostream>
#include <vector>
#include <memory>
#include "fruta.h"
#include "bebida.h"
#include "roupa.h"

using namespace std;

int main(int argc, char const *argv[])
{
	vector<shared_ptr<Produto>> lista;
	
	lista.push_back(make_shared<Fruta>("001002003-45","Maca verde",8.70,"01/10/2017",18));
	lista.push_back(make_shared<Fruta>("001002004-44","Laranja",4.75,"23/09/2017",15));
	lista.push_back(make_shared<Fruta>("001002005-11","Limao verde",2.30,"01/10/2017",25));
	lista.push_back(make_shared<Bebida>("001002005-33","Stella Artois",3.99,5.2));
	lista.push_back(make_shared<Roupa>("001002005-85","Calca Jeans",79.99,"Clock House","M","M"));
	lista.push_back(make_shared<Roupa>("001002005-25","Bermuda",59.99,"Lacoste","M","36"));


	for (auto i = lista.begin(); i != lista.end(); ++i)
	{
		cout << (**i) << endl;	
	}

	return 0;
}