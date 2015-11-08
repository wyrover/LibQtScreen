#pragma once

#include <stdint.h>

inline uint64_t GetVtableOffset(uint64_t module, void* cls, uint32_t offset) {
    uintptr_t* virtualTable = *(uintptr_t**)cls;
    return (uint64_t)(virtualTable[offset] - module);
}

void GetDX8Offsets(uint64_t& present);