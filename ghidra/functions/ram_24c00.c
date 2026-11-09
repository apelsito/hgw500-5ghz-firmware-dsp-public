/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00024c00 */

/* WARNING: Removing unreachable block (ram,0x00024c5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00024c00(undefined4 param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  
  iVar4 = FUN_ram_000268f8(1,param_1,param_2);
  if (iVar4 == 0) {
    iVar8 = ((uint)*(ushort *)(param_2 + 0x24) % 10) * 4;
    iVar4 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
    *(int *)(iVar8 + iVar4 + -0x80) = *(int *)(iVar4 + iVar8 + -0x80) + 1;
  }
  else {
    uVar9 = 0;
    do {
      if ((&DAT_ram_00062220)[uVar9 * 0x28] != '\0') {
        iVar8 = 0;
        if ((&DAT_ram_00062224)[uVar9 * 0x14] == *(short *)(param_2 + 0x24)) {
          iVar5 = FUN_ram_00026acc(1,(&DAT_ram_00062226)[uVar9 * 0x14]);
          iVar8 = iVar4;
        }
        else {
          iVar5 = 0;
          if ((&DAT_ram_00062226)[uVar9 * 0x14] == *(short *)(param_2 + 0x24)) {
            iVar8 = FUN_ram_00026acc(1);
            iVar5 = iVar4;
          }
        }
        if ((iVar8 != 0) && (iVar5 != 0)) {
          iVar3 = COUNT0;
          iVar8 = FUN_ram_00036a4c(iVar8,iVar5,&DAT_ram_0005ab88);
          if (iVar8 == 0) {
            iVar8 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
            *(int *)(iVar8 + uVar9 * 4 + 0x108) = *(int *)(iVar8 + uVar9 * 4 + 0x108) + 1;
          }
          else {
            FUN_ram_00036c20(iVar8,&DAT_ram_0005ab88);
            iVar8 = COUNT0;
            uVar10 = FUN_ram_0004065c(iVar8 - iVar3,0,2);
            uVar6 = FUN_ram_0004046c((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1000000,0);
            uVar7 = DAT_ram_00055960;
            if (DAT_ram_00055960 <= uVar6) {
              uVar7 = uVar6;
            }
            uVar1 = (ulonglong)(uVar6 & 0xffff) * 0xaaaaaaab;
            uVar2 = uVar1 + (ulonglong)(uVar6 & 0xffff0000) * 0xaaaaaaab;
            if (uVar2 < uVar1) {
              uVar2 = 0xffffffffffffffff;
            }
            uVar6 = (uint)(uVar2 >> 0x22);
            if (6 < uVar6) {
              uVar6 = 7;
            }
            iVar8 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
            DAT_ram_00055960 = uVar7;
            *(int *)(iVar8 + uVar6 * 4 + 0x14c) = *(int *)(iVar8 + uVar6 * 4 + 0x14c) + 1;
            iVar8 = *(int *)(_DAT_ram_e00000bc + 0x54) + 0xff8;
            *(int *)(iVar8 + uVar9 * 4 + 0xfc) = *(int *)(iVar8 + uVar9 * 4 + 0xfc) + 1;
            *(uint *)(*(int *)(_DAT_ram_e00000bc + 0x54) + 0x1164) = uVar7;
          }
        }
      }
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < 3);
  }
  return;
}


