#include <iostream>
#include "sqlite3.h"
#include "commonDef.h"

int main()
{
    sqlite3 *db = nullptr;
    int result = 0;
    result = sqlite3_open(TEST_DB, &db);
    if (result != SQLITE_OK)
    {
        std::cout << "open database failed!\n";
        sqlite3_close(db);
    }
    std::cout << "open database success!\n";
    result = sqlite3_exec(db, sqlTable[0], nullptr, nullptr, nullptr);
    sqlite3_close(db);
	std::cout << "test!!!!!!!!\n";
    return 0;
}
