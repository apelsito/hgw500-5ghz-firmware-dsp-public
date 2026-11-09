/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00030df4 */

undefined4 FUN_ram_00030df4(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < param_4) {
    do {
      iVar5 = 0;
      if (0 < param_3) {
        iVar3 = iVar6 * 4;
        puVar1 = *(undefined1 **)(param_1 + iVar3);
        do {
          iVar4 = iVar5 * 0x10;
          iVar5 = iVar5 + 1;
          puVar2 = puVar1 + 1;
          *puVar1 = (char)((ushort)*(undefined2 *)(iVar4 + iVar3 + param_2) >> 8);
          puVar1 = puVar1 + 2;
          *puVar2 = (char)((ushort)*(undefined2 *)(iVar4 + iVar3 + param_2 + 2) >> 8);
        } while (iVar5 < param_3);
        *(undefined1 **)(iVar3 + param_1) = puVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_4);
  }
  return 0;
}


