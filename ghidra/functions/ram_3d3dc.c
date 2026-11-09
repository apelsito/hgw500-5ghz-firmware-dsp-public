/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003d3dc */

void FUN_ram_0003d3dc(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = DAT_ram_000559c0;
  uVar3 = DAT_ram_000559bc;
  uVar4 = FUN_ram_0003cd1c();
  lVar5 = CONCAT44(DAT_ram_000559c0,DAT_ram_000559bc);
  if ((int)((iVar2 - (int)((ulonglong)uVar4 >> 0x20)) - (uint)(uVar3 < (uint)uVar4)) < 0) {
    uVar3 = 0;
    lVar5 = FUN_ram_0003cd1c();
    lVar5 = lVar5 + 50000000;
    do {
      DAT_ram_000559c0 = (int)((ulonglong)lVar5 >> 0x20);
      DAT_ram_000559bc = (uint)lVar5;
      if (*(int *)(&DAT_ram_000b830c)[uVar3 * 4] == 0x39393939) {
        uVar1 = (&DAT_ram_000b8314)[uVar3 * 4];
        iVar2 = (&DAT_ram_000b8318)[uVar3 * 4];
        uVar4 = FUN_ram_0003cd1c();
        if ((int)((iVar2 - (int)((ulonglong)uVar4 >> 0x20)) - (uint)(uVar1 < (uint)uVar4)) < 0) {
          *(undefined4 *)(&DAT_ram_000b8310)[uVar3 * 4] = 0;
          uVar1 = FUN_ram_0003e840();
          lVar5 = FUN_ram_000405f8((uVar1 & 0x7fff) + 5000,0,250000,0);
          lVar6 = FUN_ram_0003cd1c();
          *(longlong *)(&DAT_ram_000b8314 + uVar3 * 4) = lVar5 + lVar6;
        }
        else {
          *(undefined4 *)(&DAT_ram_000b8310)[uVar3 * 4] = 2;
        }
        FUN_ram_00020bac((&DAT_ram_000b830c)[uVar3 * 4],0x20);
        lVar5 = CONCAT44(DAT_ram_000559c0,DAT_ram_000559bc);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 8);
  }
  DAT_ram_000559c0 = (int)((ulonglong)lVar5 >> 0x20);
  DAT_ram_000559bc = (uint)lVar5;
  return;
}


