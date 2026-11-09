/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00026870 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00026870(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = 0;
  do {
    if ((&DAT_ram_000622dc)[uVar1 * 0x18] == '\x01') {
      uVar3 = (&DAT_ram_0006230c)[uVar1 * 2];
      iVar2 = (&DAT_ram_00062310)[uVar1 * 2];
      uVar4 = FUN_ram_0003cd1c();
      if ((int)((iVar2 - (int)((ulonglong)uVar4 >> 0x20)) - (uint)(uVar3 < (uint)uVar4)) < 0) {
        iVar2 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
        *(int *)(iVar2 + uVar1 * 4 + 0x174) = *(int *)(iVar2 + uVar1 * 4 + 0x174) + 1;
        FUN_ram_0002673c(uVar1);
      }
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 2);
  return;
}


