/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00034568 */

undefined1 * FUN_ram_00034568(undefined1 *param_1,int param_2,int param_3)

{
  short local_14 [2];
  
  local_14[0] = (ushort)*(byte *)(param_3 + 0x27) + (ushort)*(byte *)(param_3 + 0x26);
  if (*(int *)(param_2 + 8) == 4) {
    FUN_ram_00032540(param_3,&DAT_ram_0005c220,local_14);
    param_1 = &DAT_ram_0005c220;
  }
  if (*(int *)(param_3 + 0x14) == 0) {
    FUN_ram_00032b3c(param_1,&DAT_ram_0005c220,local_14[0],0,1,*(undefined4 *)(param_3 + 8),
                     *(int *)(param_3 + 0x10) + 1);
    param_1 = &DAT_ram_0005c220;
    *(undefined4 *)(param_3 + 0x14) = 1;
  }
  return param_1;
}


