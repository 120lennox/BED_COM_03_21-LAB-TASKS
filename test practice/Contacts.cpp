#include "Contacts.H"

Contacts::Contacts(){
    first_name = "";
    last_name = "";
    phone_number = "";
}

Contacts::Contacts(string fname, string lname, string num){
    first_name = fname;
    last_name = lname;
    phone_number = num;
}

void Contacts::set_firstname(string name){
    first_name = name;
}

void Contacts::set_lastname(string lname){
    last_name = lname;
}

void Contacts::set_pnumber(string num){
    phone_number = num;
}

string Contacts::get_fname(){
    return first_name;
}

string Contacts::get_lname(){
    return last_name;
}

string Contacts::get_number(){
    return phone_number;
}

Contacts Contacts::operator=(const Contacts& contact){
    Contacts contact;
    if (this != &contact){
        first_name = contact.first_name;
        last_name = contact.last_name;
        phone_number = contact.phone_number;
    }
    return contact;
}