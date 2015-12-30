#include "Parser.h"
#include "regex.h"

int main() {
    Table table;
    vector<Record_Cell> cols;
    cols.push_back(Record_Cell("Jane", 0, 4));
    cols.push_back(Record_Cell("Stephan", 4, 5));
    cols.push_back(Record_Cell("Demo", 5, 6));
    cols.push_back(Record_Cell("Elena", 6 ,7));
    table["name"] = cols;
    ntr["Actor"] = table;
	text = "JaneJaneJane,Stephan and JaneJane is Jane.";

    string aql_name = "test.aql";
    Lexer *lexer = new Lexer(aql_name);
    Parser parser(lexer);
    parser.program();

    return 0;
}