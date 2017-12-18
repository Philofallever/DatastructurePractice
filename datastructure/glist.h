#pragma once
// 广义表的链表储存表示
typedef enum {ATOM,LIST} ELEMTAG;
typedef int AtomType;
typedef struct GListNode
{
	ELEMTAG tag; 
	union 
	{
		AtomType atom;
		struct { struct GListNode * ph, *pt;} ptn;
	};
} * GList;



//广义表的线性储存表示
typedef struct GLListNode
{
	ELEMTAG tag;
	union 
	{
		AtomType atom;
		struct GLListNode * ph;
	};
	struct GLListNode * pt;
} * GLList;