/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003c428 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0003c428(void)

{
  int iVar1;
  
  if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x400) != 0) {
    if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) {
      if (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) {
        FUN_ram_0002086c(&DAT_ram_000558f4);
      }
    }
    iVar1 = 0;
    do {
      if ((*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0) &&
         (*(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe14) != 0)) {
        FUN_ram_0002086c(s_idx____d__aid____d__time____llu__ram_000558f8,iVar1,
                         (int)(short)(&DAT_ram_000b8184)[iVar1 * 10],(&DAT_ram_000b8188)[iVar1 * 5],
                         (&DAT_ram_000b818c)[iVar1 * 5],(int)(short)(&DAT_ram_000b817c)[iVar1 * 10],
                         (int)(short)(&DAT_ram_000b817e)[iVar1 * 10],
                         (int)(short)(&DAT_ram_000b8180)[iVar1 * 10],
                         (int)(short)(&DAT_ram_000b8182)[iVar1 * 10]);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
  }
  return;
}


