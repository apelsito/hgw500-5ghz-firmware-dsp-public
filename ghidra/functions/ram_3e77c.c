/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003e77c */

/* WARNING: Removing unreachable block (ram,0x0003e7e4) */
/* WARNING: Removing unreachable block (ram,0x0003e7f4) */
/* WARNING: Removing unreachable block (ram,0x0003e7f8) */
/* WARNING: Removing unreachable block (ram,0x0003e804) */
/* WARNING: Removing unreachable block (ram,0x0003e808) */

void FUN_ram_0003e77c(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int unaff_r13;
  uint *unaff_r16;
  undefined4 *unaff_r17;
  byte *unaff_r18;
  uint unaff_r19;
  uint uVar5;
  
  pbVar2 = unaff_r18;
  uVar5 = unaff_r19;
  do {
    uVar3 = (uint)*pbVar2;
    bVar1 = PTR_DAT_ram_0005500d_ram_0003e83c[uVar3];
    if ((bVar1 & 4) == 0) {
      if ((bVar1 & 3) == 0) {
LAB_ram_0003e80a:
        if (pbVar2 == unaff_r18) {
          uVar5 = 0xffffffff;
        }
        if (unaff_r17 != (undefined4 *)0x0) {
          *unaff_r17 = pbVar2;
        }
        if (unaff_r16 != (uint *)0x0) {
          *unaff_r16 = uVar5;
        }
        return;
      }
      if ((bVar1 & 2) != 0) {
        uVar3 = uVar3 - 0x20;
      }
      iVar4 = uVar3 - 0x37;
    }
    else {
      iVar4 = uVar3 - 0x30;
    }
    if (unaff_r13 <= iVar4) goto LAB_ram_0003e80a;
    if (0x1fffffff < unaff_r19) {
      uVar5 = 0x22;
    }
    unaff_r19 = iVar4 + unaff_r19 * 8;
    pbVar2 = pbVar2 + 1;
  } while( true );
}


