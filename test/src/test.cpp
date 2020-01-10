#include <iostream>
#include "sqlite3.h"

int main()
{
    sqlite3 *db = nullptr;
    int result = 0;
    result = sqlite3_open("./dbs/test.db", &db);
    if (result != SQLITE_OK)
    {
        std::cout << "open database failed!\n";
        sqlite3_close(db);
    }
    std::cout << "open database success!\n";
    sqlite3_close(db);
	std::cout << "test!!!!!!!!\n";
    return 0;
}
