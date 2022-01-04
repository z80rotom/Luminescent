#pragma once

#include "il2cpp.h"

System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_Match__get_Empty (const MethodInfo* method);
void System_Text_RegularExpressions_Match___ctor (System_Text_RegularExpressions_Match_o* __this, System_Text_RegularExpressions_Regex_o* regex, int32_t capcount, System_String_o* text, int32_t begpos, int32_t len, int32_t startpos, const MethodInfo* method);
void System_Text_RegularExpressions_Match__Reset (System_Text_RegularExpressions_Match_o* __this, System_Text_RegularExpressions_Regex_o* regex, System_String_o* text, int32_t textbeg, int32_t textend, int32_t textstart, const MethodInfo* method);
System_Text_RegularExpressions_GroupCollection_o* System_Text_RegularExpressions_Match__get_Groups (System_Text_RegularExpressions_Match_o* __this, const MethodInfo* method);
System_Text_RegularExpressions_Match_o* System_Text_RegularExpressions_Match__NextMatch (System_Text_RegularExpressions_Match_o* __this, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Match__GroupToStringImpl (System_Text_RegularExpressions_Match_o* __this, int32_t groupnum, const MethodInfo* method);
System_String_o* System_Text_RegularExpressions_Match__LastGroupToStringImpl (System_Text_RegularExpressions_Match_o* __this, const MethodInfo* method);
void System_Text_RegularExpressions_Match__AddMatch (System_Text_RegularExpressions_Match_o* __this, int32_t cap, int32_t start, int32_t len, const MethodInfo* method);
void System_Text_RegularExpressions_Match__BalanceMatch (System_Text_RegularExpressions_Match_o* __this, int32_t cap, const MethodInfo* method);
void System_Text_RegularExpressions_Match__RemoveMatch (System_Text_RegularExpressions_Match_o* __this, int32_t cap, const MethodInfo* method);
bool System_Text_RegularExpressions_Match__IsMatched (System_Text_RegularExpressions_Match_o* __this, int32_t cap, const MethodInfo* method);
int32_t System_Text_RegularExpressions_Match__MatchIndex (System_Text_RegularExpressions_Match_o* __this, int32_t cap, const MethodInfo* method);
int32_t System_Text_RegularExpressions_Match__MatchLength (System_Text_RegularExpressions_Match_o* __this, int32_t cap, const MethodInfo* method);
void System_Text_RegularExpressions_Match__Tidy (System_Text_RegularExpressions_Match_o* __this, int32_t textpos, const MethodInfo* method);
void System_Text_RegularExpressions_Match___cctor (const MethodInfo* method);
void System_Text_RegularExpressions_Match___ctor (System_Text_RegularExpressions_Match_o* __this, const MethodInfo* method);
