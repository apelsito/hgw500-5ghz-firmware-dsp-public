/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0002495c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0002495c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  if ((((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x800) != 0) &&
      (*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) =
            *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xfffff7ff,
      *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) &&
     (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
    FUN_ram_0002086c(s_Ranking_calculation__aid1___u__a_ram_00055364,*(undefined2 *)(param_1 + 0x28)
                     ,*(undefined2 *)(param_2 + 0x28),param_3,param_4,param_5,DAT_ram_000622f0);
  }
  return;
}


