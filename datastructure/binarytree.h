#pragma once
#include "common.h"

typedef int TElemType;
typedef struct BiTNode
{
	TElemType data;
	struct BiTNode * lchild, *rchild;
} BiTNode,* BiTree;

status createBiTree(BiTree pbitree);

status preOrderTraverse(BiTree pbitree, status(*Visit)(TElemType e));

status inOrderTraverse(BiTree pbitree, status(*Visit)(TElemType e));

status postOrderTraverse(BiTree pbitree, status(*Visit)(TElemType e));

status levelOrderTraverse(BiTree pbitree, status(*Visit)(TElemType e));

