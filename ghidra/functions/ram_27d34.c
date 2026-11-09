/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00027d34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00027d34(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0;
  uVar7 = FUN_ram_0003cd1c();
  uVar2 = (uint)uVar7;
  uVar5 = (uint)DAT_ram_00055968;
  DAT_ram_00055969 = 0;
  uVar3 = uVar2;
  if (uVar5 != 0) {
    do {
      iVar4 = (uint)(byte)(&DAT_ram_000b241c)[iVar6] * 0x70;
      if ((*(uint *)(&DAT_ram_000b07a0 + iVar4) & 1) != 0) {
        uVar1 = *(uint *)(&DAT_ram_000b07a4 + iVar4) + 2500000000;
        uVar3 = uVar1 - uVar2;
        if ((((int)(((*(int *)(&DAT_ram_000b07a8 + iVar4) +
                     (uint)(0x6afd06ff < *(uint *)(&DAT_ram_000b07a4 + iVar4))) -
                    (int)((ulonglong)uVar7 >> 0x20)) - (uint)(uVar1 < uVar2)) < 0) ||
            (uVar3 = *(uint *)(&DAT_ram_000b0794 + iVar4), (int)uVar3 < 0xf)) ||
           ((uVar3 = (uint)DAT_ram_00055969, 2 < uVar3 && (*(int *)(&DAT_ram_000b079c + iVar4) != 0)
            ))) {
          *(uint *)(&DAT_ram_000b07a0 + iVar4) = *(uint *)(&DAT_ram_000b07a0 + iVar4) & 0xfffffffe;
        }
        else {
          uVar3 = uVar3 + 1;
          DAT_ram_00055969 = (byte)uVar3;
          if ((*(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0xe18) & 0x300000) != 0) {
            uVar3 = FUN_ram_00027c90(iVar6);
            uVar5 = (uint)DAT_ram_00055968;
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar5);
  }
  return uVar3;
}


