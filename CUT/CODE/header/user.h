#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;
#include <contacts.h>
#include <personalContacts.h>
#include <businessContacts.h>

class User
{	
	public:
		void loadUserdatabase1();
		int checkDate(string );
		int checkContact(string );
		void loadContactdatabase(string );
		void changePassword(string );
		void addContact();
		void updateContact();
		void deleteContact();
		void listPersonalcontacts();
		void listBusinesscontacts();
		void userLogout(string );
	private: 
		map <int, Personal> pmap;
		map <int, Business> bmap;
		map <string, string> umap;
};

#endif
