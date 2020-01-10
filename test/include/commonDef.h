#ifndef __COMMONDEF_H_
#define __COMMONDEF_H_

#define TEST_DB "./dbs/test.db"
const char *sqlTable[] = {
    "CREATE TABLE Person\
    (\
        id INTERGE NOT NULL, \
        name TEXT, \
        address BLOB\
    )"
};
#endif