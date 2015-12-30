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
	text = "JaneJaneJane is Stephan and JaneJane is Jane.";
    char* c = "(Jane){1,2}" ;
	vector<vector<int> > result;
	result = findall(c, text);

    string aql_name = "test.aql";
    Lexer *lexer = new Lexer(aql_name);
    Parser parser(lexer);
    parser.program();

    return 0;
}