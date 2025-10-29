#include <freeze.h>

INCLUDE_ASM("asm/nonmatchings/P2/freeze", RemergeSwObject__FP2SWP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", MergeSwFreezeGroups__FP2SWP3ALOT1);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", SplinterSwFreezeGroup__FP2SWP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", MergeSwGroup__FP2SWP3MRG);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", AddSwMergeGroup__FP2SWP3MRG);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", RemoveFromArray__FPiPPvPv);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", RemoveSwMergeGroup__FP2SWP3MRG);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", RemergeSwObjects__FP2SW);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", FreezeAloHierarchy__FP3ALOi);

void GetAloFrozen(struct ALO *palo, int *pfrozen)
{
    *pfrozen = (int)(STRUCT_OFFSET(palo, 0x2c8, undefined8) >> 38) & 1;
}

INCLUDE_ASM("asm/nonmatchings/P2/freeze", FreezeAlo__FP3ALOi);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", FreezeSo__FP2SOi);

INCLUDE_ASM("asm/nonmatchings/P2/freeze", RefreezeSwObjects__FP2SW);

void UpdateSwBusyList(SW *psw)
{
    RemergeSwObjects(psw);
    RefreezeSwObjects(psw);
}
