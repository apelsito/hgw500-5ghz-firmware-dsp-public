/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0003cdbc */

int FUN_ram_0003cdbc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(int *)(param_1 + 100) != 0) {
      return *(int *)(param_1 + 100);
    }
    if (*(int *)(param_1 + 0x60) == 0) {
      FUN_ram_0003d150(param_1);
      iVar5 = 0;
      do {
        iVar1 = param_1 + iVar5;
        iVar5 = iVar5 + 1;
        *(undefined1 *)(iVar1 + 0x1e) = 0;
      } while (iVar5 < 0x40);
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x60) = 1;
    }
    uVar6 = 0;
    do {
      uVar2 = uVar6 & 0xfffffffc;
      uVar3 = uVar6 & 3;
      puVar4 = (undefined1 *)(param_2 + uVar6);
      uVar6 = uVar6 + 1;
      *puVar4 = (char)(*(uint *)(param_1 + uVar2) >> ((3 - uVar3) * 8 & 0x1f));
    } while ((int)uVar6 < 0x14);
    return 0;
  }
  return 1;
}


