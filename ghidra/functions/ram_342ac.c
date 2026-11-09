/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000342ac */

void FUN_ram_000342ac(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iStack_88;
  ushort local_78 [34];
  
  FUN_ram_0004070c(param_3,0x80);
  sVar4 = 1;
  do {
    iStack_88 = param_1 + 0x20;
    param_3 = param_3 + 0x80;
    uVar7 = 0;
    do {
      uVar3 = (ushort)*(byte *)(iStack_88 + uVar7);
      if (uVar3 < 0x80) {
        local_78[uVar7] = uVar3;
      }
      else {
        local_78[uVar7] = uVar3 - 0x100;
      }
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 0x20);
    bVar6 = 0;
    do {
      bVar5 = 0;
      do {
        iVar10 = 0;
        iVar9 = 0;
        uVar7 = (uint)(byte)(bVar5 * '\x02' + bVar6 * '\b');
        if (bVar6 < bVar5) {
          bVar8 = 0;
          do {
            iVar1 = AUX_XMACLW_H;
            uVar2 = AUX_XMACLW_L;
            iVar10 = iVar10 + (uVar2 >> 0xe) + iVar1 * 0x40000;
            iVar1 = AUX_XMACLW_H;
            uVar2 = AUX_XMACLW_L;
            bVar8 = bVar8 + 1;
            iVar9 = iVar9 + (uVar2 >> 0xe) + iVar1 * 0x40000;
          } while (bVar8 < 4);
LAB_ram_000344ee:
          piVar12 = (int *)(uVar7 * 4 + param_3);
          *piVar12 = iVar10;
          piVar12[1] = iVar9;
        }
        else {
          if (bVar6 <= bVar5) {
            bVar8 = 0;
            do {
              iVar1 = AUX_XMACLW_H;
              uVar2 = AUX_XMACLW_L;
              bVar8 = bVar8 + 1;
              iVar10 = iVar10 + (uVar2 >> 0xe) + iVar1 * 0x40000;
            } while (bVar8 < 4);
            goto LAB_ram_000344ee;
          }
          iVar9 = (uint)(byte)(bVar6 * '\x02' + bVar5 * '\b') * 4;
          puVar11 = (undefined4 *)(uVar7 * 4 + param_3);
          *puVar11 = *(undefined4 *)(param_3 + iVar9);
          puVar11[1] = -*(int *)(iVar9 + param_3 + 4);
        }
        bVar5 = bVar5 + 1;
      } while (bVar5 < 4);
      bVar6 = bVar6 + 1;
    } while (bVar6 < 4);
    sVar4 = sVar4 + 1;
    param_1 = iStack_88;
    if (0x7f < sVar4) {
      return;
    }
  } while( true );
}


