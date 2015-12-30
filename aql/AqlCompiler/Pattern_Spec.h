#pragma once
#include "Stmt.h"
#include "regex.h"
class Pattern_Spec :
    public Stmt
{
public:
    Stmt *stmt1, *stmt2;
    Pattern_Spec() {}
    void init(Stmt *s1, Stmt *s2) { stmt1 = s1; stmt2 = s2; }
	void gen(){
		stmt2->gen();
		stmt1->gen();
		dfs(0, "");
	}
	void dfs(int deep, string re){
		if (deep == pattern_spec.size()){
			const char* regex = re.c_str();
			vector<vector<int> > result;
			result = findall(regex, text);
			for (int i = 0; i < result.size(); i++){
				for (int j = result[i][0]; j < result[i][1]; j++){
					printf("%c", *(text + j));
				}
				printf(":");
				for (int j = 0; j < result[0].size(); j += 2){
					printf("(%d,%d)", result[i][j], result[i][j + 1]);
				}
				printf("\n");
			}
			return;
		}
		else{
			for (int i = 0; i < pattern_spec[deep].size(); i++){
				dfs(deep + 1, re + pattern_spec[deep][i].content);
			}
		}
	}
};

