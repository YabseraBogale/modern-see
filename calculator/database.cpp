#include<sqlite3.h>
#include<iostream>
int main(){
    sqlite3 *db;
    if(sqlite3_open("database.db",&db)){
       std::cerr << "Can't open database: " << sqlite3_errmsg(db) << std::endl;
        return 1;
    } else {
        std::cout << "Opened database successfully!" << std::endl;
    }    
    return 0;
}