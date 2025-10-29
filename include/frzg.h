/**
 * @file frzg.h
 */
#ifndef FRZG_H
#define FRZG_H

#include "common.h"
#include <freeze.h>
#include <oid.h>
#include <lo.h>

/**
 * @class FREEZE_GROUP
 * @brief Group of freeze objects.
 */
struct FRZG : public LO
{
    /* 0x034 */ int coid;
    /* 0x038 */ OID aoid[8];
    /* 0x058 */ MRG mrg;
};

void PostFrzgLoad(FRZG *pfrzg);

void AddFrzgObject(FRZG *pfrzg, OID oid);

#endif // FRZG_H
