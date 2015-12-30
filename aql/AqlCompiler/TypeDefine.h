#pragma once

#include <map>
#include <string>
#include <vector>
using namespace std;

#include "Record_Cell.h"

typedef map< string, vector<Record_Cell> > Table;
typedef map<string, string> Name_Mapping_Relation;
typedef map< string, Table > Name_Table_Relation;

Name_Table_Relation ntr;
map<string, string> __from_list;
Table __target_table;
map<int, string> __group_spec;
pair<string, string> __column;
string __reg;
vector<vector<Record_Cell> > pattern_spec;
char * text;
