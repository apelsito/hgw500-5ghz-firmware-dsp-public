/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e7fc */

void FUN_ram_0003e7fc(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  uint extraout_r2;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int extraout_r3;
  uint extraout_r4;
  uint uVar8;
  uint unaff_r13;
  uint unaff_r14;
  undefined4 *unaff_r16;
  undefined4 *unaff_r17;
  byte *unaff_r18;
  undefined4 unaff_r19;
  undefined8 uVar9;
  uint extraout_r2_00;
  int extraout_r3_00;
  uint extraout_r4_00;
  
  bVar1 = (bool)ext_condition(0x1f);
  uVar9 = FUN_ram_0003e77c();
  uVar5 = extraout_r2;
  iVar7 = extraout_r3;
  uVar8 = extraout_r4;
  if (bVar1) {
    uVar9 = FUN_ram_0003e77c();
    uVar5 = extraout_r2_00;
    iVar7 = extraout_r3_00;
    uVar8 = extraout_r4_00;
  }
code_r0x0003e802:
  pbVar4 = (byte *)((ulonglong)uVar9 >> 0x20);
  if ((uint)uVar9 < unaff_r14) {
    unaff_r19 = 0x22;
  }
  do {
    uVar3 = iVar7 + unaff_r14;
    pbVar4 = pbVar4 + 1;
    uVar6 = (uint)*pbVar4;
    bVar2 = PTR_DAT_ram_0005500d_ram_0003e83c[uVar6];
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 3) == 0) goto LAB_ram_0003e80a;
      if ((bVar2 & 2) != 0) {
        uVar6 = uVar6 - 0x20;
      }
      iVar7 = uVar6 - 0x37;
    }
    else {
      iVar7 = uVar6 - 0x30;
    }
    if ((int)unaff_r13 <= iVar7) {
LAB_ram_0003e80a:
      if (pbVar4 == unaff_r18) {
        unaff_r19 = 0xffffffff;
      }
      if (unaff_r17 != (undefined4 *)0x0) {
        *unaff_r17 = pbVar4;
      }
      if (unaff_r16 != (undefined4 *)0x0) {
        *unaff_r16 = unaff_r19;
      }
      return;
    }
    if (uVar8 < uVar3) {
      unaff_r19 = 0x22;
    }
    if (uVar5 == 0) break;
    unaff_r14 = uVar3 << (uVar5 & 0x1f);
  } while( true );
  LP_START = 0x3e7f0;
  LP_END = 0x3e7fa;
  unaff_r14 = 0;
  if ((unaff_r13 & 1) != 0) {
    unaff_r14 = uVar3;
  }
  uVar9 = CONCAT44(pbVar4,-1 - iVar7);
  goto code_r0x0003e802;
}


