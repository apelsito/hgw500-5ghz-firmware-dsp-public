/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00024818 */

void FUN_ram_00024818(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_2 != -1) {
    if (param_2 == 0xff) {
      if (*(int *)(param_1 + 0x820) == 0xb) {
        FUN_ram_0003d4e4(param_1 + 0x820);
        *(undefined4 *)(param_1 + 0x824) = 0;
        FUN_ram_00020ae4(param_1 + 0x820,0x40);
        return;
      }
    }
    else {
      puVar2 = (undefined4 *)(param_1 + 0x20 + param_2 * 0x40);
      if (*(int *)(param_1 + 0x20 + param_2 * 0x40) == 8) {
        uVar1 = FUN_ram_0003d2b0(puVar2);
        puVar2[7] = uVar1;
        puVar2[1] = 4;
        *puVar2 = 9;
        FUN_ram_00020ae4(puVar2,0x40);
        FUN_ram_00022ad0(param_1,param_2);
        return;
      }
    }
  }
  return;
}


