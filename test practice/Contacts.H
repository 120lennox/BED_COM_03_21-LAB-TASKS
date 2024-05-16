#include <iostream>
#include <string>
using namespace std;

class Contacts{
    private:
        string first_name;
        string last_name;
        string phone_number;

    public:
        Contacts();
        Contacts(string fname, string lname, string num);
        void set_firstname(string fname);
        void set_lastname(string lname);
        void set_pnumber(string number);
        string get_fname();
        string get_lname();
        string get_number();
        Contacts operator=(const Contacts& contact);
        ~Contacts();
};