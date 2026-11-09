/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00033f88 */

void FUN_ram_00033f88(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  
  bVar1 = *(byte *)(param_3 + 0x28);
  uVar7 = 0;
  bVar3 = true;
  uVar5 = 0;
  if (bVar1 != 0) {
    uVar8 = *(uint *)(param_3 + 0xc);
    do {
      uVar4 = 0;
      do {
        bVar3 = !bVar3;
        puVar6 = (ushort *)(param_2 + (uVar7 * 4 + uVar4) * 2);
        if (bVar3) {
          uVar2 = (ushort)((int)(*(byte *)(param_1 + uVar5) & 0xf0) >> 2);
          *puVar6 = uVar2;
          uVar5 = uVar5 + 1 & 0xff;
        }
        else {
          uVar2 = (ushort)((*(byte *)(param_1 + uVar5) & 0xf) << 2);
          *puVar6 = uVar2;
        }
        if ((uVar2 & 0x20) != 0) {
          *puVar6 = uVar2 - 0x40;
        }
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 <= uVar8);
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < bVar1);
  }
  return;
}


