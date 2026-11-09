/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d4e4 */

void FUN_ram_0003d4e4(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = **(uint **)(param_1 + 0x1c);
  FUN_ram_00020aa0(*(undefined4 *)(param_1 + 0x24),0x20);
  if ((*(uint *)(param_1 + 0x18) >> 0x10 == 6) &&
     (((*(uint *)(param_1 + 0x18) & 0x80) == 0 || ((*(uint *)(param_1 + 0x18) & 0x40) == 0)))) {
    uVar2 = (uint)*(byte *)(param_1 + 0x30);
    if (((uVar3 & 0x80000000) == 0) &&
       ((((uVar3 == uVar2 || (uVar2 == 0)) || (uVar2 == 0x13)) || (uVar2 == 1)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      **(undefined4 **)(param_1 + 0x24) = 0x39393939;
      **(undefined4 **)(param_1 + 0x14) = 0x200;
      FUN_ram_00020bac(*(undefined4 *)(param_1 + 0x24),0x20);
      uVar3 = (uint)DAT_ram_000559c4;
      (&DAT_ram_000b830c)[uVar3 * 4] = *(undefined4 *)(param_1 + 0x24);
      (&DAT_ram_000b8310)[uVar3 * 4] = *(undefined4 *)(param_1 + 0x20);
      uVar3 = FUN_ram_0003e840();
      lVar4 = FUN_ram_000405f8((uVar3 & 0x7fff) + 5000,0,250000,0);
      lVar5 = FUN_ram_0003cd1c();
      *(longlong *)(&DAT_ram_000b8314 + (uint)DAT_ram_000559c4 * 4) = lVar4 + lVar5;
      if (DAT_ram_000559c4 == 7) {
        DAT_ram_000559c4 = 0;
      }
      else {
        DAT_ram_000559c4 = DAT_ram_000559c4 + 1;
      }
    }
  }
  return;
}


