/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00023e34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00023e34(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x1000) != 0) &&
     (*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) =
           *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0xffffefff, 0 < param_2)) {
    do {
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        iVar1 = iVar2 * 0x20;
        FUN_ram_0002086c(s_Stuff_mem___3d__08x__08x__08x__0_ram_00055284,iVar2,
                         *(undefined4 *)(param_1 + iVar1),*(undefined4 *)(param_1 + iVar1 + 4),
                         *(undefined4 *)(param_1 + iVar1 + 8),*(undefined4 *)(param_1 + iVar1 + 0xc)
                         ,*(undefined4 *)(param_1 + iVar1 + 0x10),
                         *(undefined4 *)(param_1 + iVar1 + 0x14),
                         *(undefined4 *)(param_1 + iVar1 + 0x18),
                         *(undefined4 *)(iVar1 + param_1 + 0x1c));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}


