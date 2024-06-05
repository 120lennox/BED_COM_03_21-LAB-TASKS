#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void subscritption_service(){
    srand(time(0));
    int daysUntilExpiration = rand() % 12;

    switch(daysUntilExpiration){
        case 0:
            cout<<"Your subscription has expired. \n";
            break;

        case 1:
            cout<<"Your subscription expires within a day!\n";
            cout<<"Renew now and save 20%!\n";
            break;
        
        //condition if days daysUntilExpiration <= 5
        case 2:
        case 3:
        case 4:
        case 5:
            cout<<"Your subscription expires in "<<daysUntilExpiration<<" days\n";
            cout<<"Renew now and save 10%! \n";
            break;

        //condition if days daysUntilExpiration <= 10
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout<<"Your subscription will expire soon. Renew Now!\n";
            break;

        default:
            cout<<"You have an active subscription.\n";

    }

}

int main(){
    subscritption_service();
    return 0;
}