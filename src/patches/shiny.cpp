#include "Pml/PokePara/InitialSpec.hpp"
#include "Pml/PokePara/CalcTool.h"
#include "Pml/PokePara/Factory.hpp"
#include "Pml/Local/Random.h"
#include "Pml/Local/RandomGenerator.hpp"
#include "Pml/Personal/PersonalSystem.hpp"
#include "Pml/Personal/PersonalTableExtensions.hpp"

#include "il2cpp-api.h"
#include "util.hpp"

uint32_t Pml_Local_Random_GetValue_Hook(Pml::PokePara::InitialSpec_o * pFixSpec)
{
    uint32_t rareTryCount = pFixSpec->fields.rareTryCount;
    uint32_t rareRnd = 0;
    uint32_t id = pFixSpec->fields.id;

    rareTryCount += 8;

    for (uint32_t i = 0; i < rareTryCount; i++)
    {
        rareRnd = Pml::Local::Random::GetValue((MethodInfo *) nullptr);
        
        if (Pml::PokePara::CalcTool::IsRareColor(id, rareRnd, (MethodInfo *) nullptr))
        {
            break;
        }
    }
    // Make sure that we don't keep looping
    pFixSpec->fields.rareTryCount = 0;

    return rareRnd;
}

uint32_t Pml_Local_RandomGenerator_GetRand_Hook(Pml::Local::RandomGenerator_o * rng, Pml::PokePara::InitialSpec_o * pFixSpec)
{
    uint32_t rareTryCount = pFixSpec->fields.rareTryCount;
    uint32_t rareRnd = 0;
    uint32_t id = pFixSpec->fields.id;

    rareTryCount += 8;

    for (uint32_t i = 0; i < rareTryCount; i++)
    {
        rareRnd = rng->GetRand((MethodInfo *) nullptr);
        
        if (Pml::PokePara::CalcTool::IsRareColor(id, rareRnd, (MethodInfo *) nullptr))
        {
            break;
        }
    }

    pFixSpec->fields.rareTryCount = 0;

    return rareRnd;
}