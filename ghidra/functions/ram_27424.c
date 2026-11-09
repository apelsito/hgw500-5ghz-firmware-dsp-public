/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00027424 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00027424(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  iVar9 = *(int *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x11a0);
  uVar10 = (uint)DAT_ram_00055968;
  iVar5 = 0;
  iVar6 = iVar5;
  if (uVar10 != 0) {
    do {
      while (iVar5 = iVar5 + 1, iVar5 < (int)uVar10) {
        bVar1 = (&DAT_ram_000b241c)[iVar6];
        iVar7 = (uint)bVar1 * 0x70;
        iVar4 = *(int *)(&DAT_ram_000b0794 + iVar7);
        iVar8 = (uint)(byte)(&DAT_ram_000b241c)[iVar5] * 0x70;
        iVar3 = *(int *)(&DAT_ram_000b0794 + iVar8);
        bVar2 = false;
        if ((*(int *)(&DAT_ram_000b079c + iVar8) == 0) || (*(int *)(&DAT_ram_000b079c + iVar7) != 0)
           ) {
          if ((*(int *)(&DAT_ram_000b079c + iVar7) != 0) &&
             (*(int *)(&DAT_ram_000b079c + iVar8) == 0)) {
            iVar3 = iVar3 - iVar9;
          }
          if (iVar4 < iVar3) goto LAB_ram_000274d2;
        }
        else if ((iVar4 <= iVar3) || (iVar4 - iVar9 < iVar3)) {
LAB_ram_000274d2:
          bVar2 = true;
        }
        if (bVar2) {
          (&DAT_ram_000b241c)[iVar6] = (&DAT_ram_000b241c)[iVar5];
          (&DAT_ram_000b241c)[iVar5] = bVar1;
        }
      }
      iVar5 = iVar6 + 1;
      iVar6 = iVar5;
    } while (iVar5 < (int)uVar10);
  }
  return;
}


