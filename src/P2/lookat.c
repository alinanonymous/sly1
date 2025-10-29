#include <lookat.h>
#include <po.h>

INCLUDE_ASM("asm/nonmatchings/P2/lookat", InitActla__FP5ACTLAP3ALO);

INCLUDE_ASM("asm/nonmatchings/P2/lookat", SetActlaTarget__FP5ACTLAP3ALOP6VECTOR);

ALO *PaloGetActlaTarget(ACTLA* pactla)
{
    // if (pactla->paloTarget->dleOid.next == nullptr)
    if (STRUCT_OFFSET(pactla, 0x1c, void *) == nullptr)
    {
        return PpoCur();
    }
    else
    {
        // return pactla->paloTarget->paloParent;
        return STRUCT_OFFSET(pactla, 0x24, ALO *);
    }
}

INCLUDE_ASM("asm/nonmatchings/P2/lookat", UpdateActla__FP5ACTLAf);

INCLUDE_ASM("asm/nonmatchings/P2/lookat", GetActlaRotationGoal__FP5ACTLAfP7MATRIX3P6VECTOR);
