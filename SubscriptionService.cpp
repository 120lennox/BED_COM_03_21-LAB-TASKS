#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void subscription_warning(){
    //seed the rand so you get a different each time
    srand(time(0));
    
    int daysUntilExpiration = rand() % 12;
    if ( daysUntilExpiration == 0){
        cout<<"Your subscription has expired. \n";
    }

    else if (daysUntilExpiration <= 1){
        cout<<"Your subscription expires within a day!\n";
        cout<<"Renew now and save 20%!\n";
    }

    else if (daysUntilExpiration <= 5){
        cout<<"Your subscription expires in "<<daysUntilExpiration<<" days\n";
        cout<<"Renew now and save 10%! \n";
    }

    else if (daysUntilExpiration <= 10){
        cout<<"Your subscription will expire soon. Renew Now!\n";
    }

    else{
        cout<<"You have an active subscription.\n";
    }
}
int main()
{
    subscription_warning();
    return 0;
}