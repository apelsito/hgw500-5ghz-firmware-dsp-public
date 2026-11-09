/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00025dd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_00025dd0(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined1 *)FUN_ram_00025e54();
  if (puVar2 == (undefined1 *)0x0) {
    uVar3 = 0;
    do {
      iVar1 = uVar3 * 0x28;
      if ((&DAT_ram_00062220)[iVar1] == '\0') {
        (&DAT_ram_00062220)[iVar1] = 1;
        (&DAT_ram_00062224)[uVar3 * 0x14] = param_1;
        (&DAT_ram_00062226)[uVar3 * 0x14] = param_2;
        *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1078) =
             *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1078) + 1;
        return &DAT_ram_00062220 + iVar1;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 3);
  }
  return puVar2;
}


